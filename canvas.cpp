#include "canvas.h"
#include "hwwindow.h"

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

int Canvas::cx(const int x)
{
    return maxw + x;
}

int Canvas::cy(const int y)
{
    return maxh - y;
}