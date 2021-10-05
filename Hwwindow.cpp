#include "Hwwindow.h"
#include "gtkmm/builder.h"
#include <iostream>



Hwwindow::Hwwindow()
{
    auto builder=Gtk::Builder::create_from_file("ui-mainwindow.glade");
    builder->get_widget("maingrid", maingrid);

    builder->get_widget("m_button_1", m_button_1);
    m_button_1->signal_clicked().connect(sigc::mem_fun(*this, &Hwwindow::on_button_clicked));
    builder->get_widget("m_entry_1", m_entry_1);
    builder->get_widget("m_label_1", m_label_1);
    add(*maingrid);
    set_title("Hellowworld");
}

Hwwindow::~Hwwindow()
{

}

void Hwwindow::on_button_clicked()
{
    m_label_1->set_text(m_entry_1->get_text());
}