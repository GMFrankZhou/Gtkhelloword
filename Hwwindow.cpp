#include "Hwwindow.h"
#include "gtkmm/builder.h"
#include <cairomm/context.h>
#include <iostream>


Hwwindow::Hwwindow()
{
    //auto builder = Gtk::Builder::create_from_file("ui-mainwindow.glade");
    auto builder = Gtk::Builder::create_from_resource("/unique/prefix/ui-mainwindow.glade");
    builder->get_widget("m_mainbox", m_mainbox);
    builder->get_widget("m_button_1", m_button_1);
    builder->get_widget("m_button_2", m_button_2);
    builder->get_widget("m_entry_1", m_entry_1);
    builder->get_widget("m_entry_2", m_entry_2);
    builder->get_widget("m_label_1", m_label_1);
    builder->get_widget("m_label_2", m_label_2);
    builder->get_widget("m_listbox", m_listbox);
    builder->get_widget("m_draw", m_draw);
    m_button_1->signal_clicked().connect(sigc::mem_fun(*this, &Hwwindow::m_button_1_on_clicked));
    m_draw->signal_draw().connect(sigc::mem_fun(*this, &Hwwindow::m_draw_on_draw));
    add(*m_mainbox);
    set_title("Polygon");
}

int Hwwindow::cx(const int x)
{
    return m_draw_maxw + x;
}

int Hwwindow::cy(const int y)
{
    return m_draw_maxh - y;
}

Hwwindow::~Hwwindow()
{

}

void Hwwindow::m_button_1_on_clicked()
{

}

bool Hwwindow::m_draw_on_draw(const Cairo::RefPtr<Cairo::Context> cr)
{
    m_draw_maxh=m_draw->get_allocation().get_height()/2;
    m_draw_maxw= (m_draw->get_allocation().get_width()-10)/2;
    m_label_1->set_text(std::to_string(m_draw_maxh));
    m_label_2->set_text(std::to_string(m_draw_maxw));

    cr->set_line_width(3);
    cr->set_source_rgb(0.5, 0, 0);
    cr->move_to(cx(-m_draw_maxw), cy(0));
    cr->line_to(cx(m_draw_maxw), cy(0));
    cr->move_to(cx(0), cy(m_draw_maxh));
    cr->line_to(cx(0), cy(-m_draw_maxh));
    cr->stroke();
    return true;
}