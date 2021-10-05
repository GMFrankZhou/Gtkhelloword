#include "Hwwindow.h"
#include "gtkmm/builder.h"
#include <iostream>



Hwwindow::Hwwindow()
{
    auto builder=Gtk::Builder::create_from_file("ui-mainwindow.glade");
    builder->get_widget("m_mainbox", m_mainbox);
    builder->get_widget("m_button_1", m_button_1);
    builder->get_widget("m_button_2", m_button_2);
    builder->get_widget("m_entry_1", m_entry_1);
    builder->get_widget("m_entry_2", m_entry_2);
    builder->get_widget("m_label_1", m_label_1);
    builder->get_widget("m_label_2", m_label_2);
    builder->get_widget("m_listbox", m_listbox);
    builder->get_widget("m_drawing", m_drawing);
    m_button_1->signal_clicked().connect(sigc::mem_fun(*this, &Hwwindow::on_button_clicked));

    add(*m_mainbox);
    maximize();
    set_title("Polygon");
}

Hwwindow::~Hwwindow()
{

}

void Hwwindow::on_button_clicked()
{
    m_drawing->draw
}