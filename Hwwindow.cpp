#include "Hwwindow.h"
#include "gtkmm/builder.h"

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
    m_drawing = new Canvas(this);    
    m_drawing->show();

    m_button_1->signal_clicked().connect(sigc::mem_fun(*this, &Hwwindow::m_button_1_on_clicked));

    m_mainbox->pack_end(*m_drawing);
    add(*m_mainbox);
    set_title("Polygon");
}

Hwwindow::~Hwwindow()
{
    delete m_button_1;
    delete m_button_2;
    delete m_label_1;
    delete m_label_2;
    delete m_entry_1;
    delete m_entry_2;
    delete m_listbox;
    delete m_mainbox;
    delete m_drawing;
}

void Hwwindow::m_button_1_on_clicked()
{

}

bool Canvas::on_draw(const Cairo::RefPtr<Cairo::Context> &cr)
{
    maxh=get_allocation().get_height()/2;
    maxw=(get_allocation().get_width()-10)/2;
    parent->get_entry_1()->set_tooltip_text(std::to_string(-maxw).append(" to ").append(std::to_string(maxw)));
    parent->get_entry_2()->set_tooltip_text(std::to_string(-maxh).append(" to ").append(std::to_string(maxh)));

    cr->set_line_width(3);
    cr->set_source_rgb(0.5, 0, 0);
    cr->move_to(cx(-maxw), cy(0));
    cr->line_to(cx(maxw), cy(0));
    cr->move_to(cx(0), cy(maxh));
    cr->line_to(cx(0), cy(-maxh));
    cr->stroke();
    return true;
}


Canvas::Canvas(Hwwindow *p):parent(p)
{
    property_height_request() = 700;
    property_width_request() = 700;
}
Canvas::~Canvas()
{
    delete parent;
};

int Canvas::cx(const int x)
{
    return maxw + x;
}

int Canvas::cy(const int y)
{
    return maxh - y;
}