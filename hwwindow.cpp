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

    m_listviewtext = new Gtk::ListViewText(2);
    m_listviewtext->set_column_title(0, " X ");
    m_listviewtext->set_column_title(1, " Y ");
    m_listviewtext->get_column(0)->set_fixed_width(200);
    m_listviewtext->get_column(0)->set_alignment(0.5);
    m_listviewtext->get_column(1)->set_alignment(0.5);
    m_scrolledwindow->add(*m_listviewtext);
    m_listviewtext->show();

    m_drawing = new Canvas(this);
    m_drawing->show();

    m_button_1->signal_clicked().connect(sigc::mem_fun(*this, &Hwwindow::m_button_1_on_clicked));
    m_button_2->signal_clicked().connect(sigc::mem_fun(*this, &Hwwindow::m_button_2_on_clicked));

    m_mainbox->pack_end(*m_drawing);
    add(*m_mainbox);
    set_title("Polygon");
}

Hwwindow::~Hwwindow()
{
    delete m_drawing;
    delete m_listviewtext;
}

void Hwwindow::errormsg::poperror() const
{
    Gtk::MessageDialog dlg(msg);
    dlg.run();
    return;
}

void Hwwindow::addpointtolist(const Point &p)
{
    int newrow=m_listviewtext->append(std::to_string(p.getx()));
    m_listviewtext->set_text(newrow,1,std::to_string(p.gety()));
    return;
}

void Hwwindow::m_button_1_on_clicked()
{
    int xx = m_entry_1->get_integer();
    int yy = m_entry_2->get_integer();
    try
    {
        if (!m_entry_1->isint() || !m_entry_2->isint())
            throw errormsg("X and Y must be integer values");
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

void Hwwindow::m_button_2_on_clicked()
{

    auto selected = m_listviewtext->get_selected();
    if (!selected.empty())    {
        std::cout << selected[0];
        set_title(std::to_string(selected[0]));
        }        //  Glib::RefPtr<Gtk::ListStore> ls = m_listviewtext->get_model()
        //  auto it=ls->get_iter(std::to_string(selected[0]));
        //  ls->erase(it);
}

