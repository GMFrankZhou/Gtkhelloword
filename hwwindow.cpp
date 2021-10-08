#include "hwwindow.h"
#include <gtkmm/builder.h>
#include <gtkmm/messagedialog.h>
#include "canvas.h"
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
    builder->get_widget("m_listbox", m_listbox);
    m_drawing = new Canvas(this);    
    m_drawing->show();
    set_can_focus();
    m_button_1->signal_clicked().connect(sigc::mem_fun(*this, &Hwwindow::m_button_1_on_clicked));
    m_mainbox->pack_end(*m_drawing);
    add(*m_mainbox);
    set_title("Polygon");
}

Hwwindow::~Hwwindow()
{
}

void Hwwindow::m_button_1_on_clicked()
{
    if (!m_entry_1->isint() || !m_entry_2->isint())
    {
        Gtk::MessageDialog msg(*this, "X and Y must be integer values");
        msg.run();
        return;
    }
    int xx = std::stoi(m_entry_1->get_text());
    int yy = std::stoi(m_entry_2->get_text());
    if (xx<-m_drawing->get_maxw() || xx>=m_drawing->get_maxw() )
    {
        Gtk::MessageDialog msg(*this, "X value not in range");
        msg.run();
        return;
    }
    if (yy<-m_drawing->get_maxh() || yy>=m_drawing->get_maxh() )
    {
        Gtk::MessageDialog msg(*this, "Y value not in range");
        msg.run();
        return;
    }
}
