#include "hwwindow.h"
#include <gtkmm/builder.h>
#include <gtkmm/messagedialog.h>
#include "canvas.h"
#include "point.h"
#include <string>

#include <iostream>


Hwwindow::Hwwindow()
{
    //auto builder = Gtk::Builder::create_from_file("ui-mainwindow.glade");
    auto builder = Gtk::Builder::create_from_resource("/unique/prefix/ui-mainwindow.glade");
    builder->get_widget("m_mainbox", m_mainbox);
    builder->get_widget("m_button_1", m_button_1);
    builder->get_widget("m_button_2", m_button_2);
    builder->get_widget_derived("m_entry_1", m_entry_1, this);
    builder->get_widget_derived("m_entry_2", m_entry_2, this);
    builder->get_widget("m_label_1", m_label_1);
    builder->get_widget("m_label_2", m_label_2);
    builder->get_widget("m_scrolledwindow", m_scrolledwindow);

    setuplistbox();

    m_drawing = new Canvas(this);
    m_drawing->show();

    m_button_1->signal_clicked().connect(sigc::mem_fun(*this, &Hwwindow::m_button_1_on_clicked));
    m_button_2->signal_clicked().connect(sigc::mem_fun(*this, &Hwwindow::m_button_2_on_clicked));

    m_mainbox->pack_end(*m_drawing);
    add(*m_mainbox);
    set_title("Polygon");
}

void Hwwindow::setuplistbox()
{
    m_columns.add(xcol);
    m_columns.add(ycol);
    m_liststore = Gtk::ListStore::create(m_columns);
    m_treeview = new Gtk::TreeView(m_liststore);
    m_treeview->append_column("X", xcol);
    m_treeview->append_column("Y", ycol);
    m_treeview->get_column(0)->set_fixed_width(190);
    m_treeview->get_column(0)->set_alignment(0.5);
    m_treeview->get_column(1)->set_alignment(0.5);
    m_scrolledwindow->add(*m_treeview);
    m_treeview->show();
}

Hwwindow::~Hwwindow()
{
    delete m_drawing;
    delete m_treeview;
}

void Hwwindow::errormsg::poperror() const
{
    Gtk::MessageDialog dlg(msg);
    dlg.run();
    return;
}

void Hwwindow::addpointtolist(const Point &p)
{
    auto newrow = m_liststore->append();
    (*newrow)[xcol]=p.getx();
    (*newrow)[ycol]=p.gety();
    return;
}

void Hwwindow::m_button_1_on_clicked()
{
    int xx, yy;
    try
    {
        if (!m_entry_1->isint() || !m_entry_2->isint())
            throw errormsg("X and Y must be integer values");
        xx = m_entry_1->get_integer();
        yy = m_entry_2->get_integer();
        if (xx<-m_drawing->get_maxw() || xx>=m_drawing->get_maxw())
            throw errormsg("X value not in range");
        if (yy<-m_drawing->get_maxh() || yy>=m_drawing->get_maxh())
            throw errormsg("Y value not in range");
    }
    catch(const errormsg& e)
    {
        e.poperror();
        return;
    }
    addpointtolist(Point(xx, yy));
}

Gtk::TreeModel::iterator Hwwindow::getselectedpoint(Point &p) const
{
    int xx, yy;
    auto selrow = m_treeview->get_selection()->get_selected();
    if (selrow) 
    {
        xx = (*selrow)[xcol];
        yy = (*selrow)[ycol];
    }
    p = Point(xx, yy);
    return selrow;
}

void Hwwindow::m_button_2_on_clicked()
{
    Point p;
    auto selrow = getselectedpoint(p);
    if (selrow) {
        m_liststore->erase(selrow);
        set_title(std::to_string(p.getx()));
    }
}
