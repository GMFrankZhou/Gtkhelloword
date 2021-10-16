#include "canvas.h"
#include "hwwindow.h"
#include "point.h"
#include "pointset.h"
#include "polygon.h"


bool Canvas::on_draw(const Cairo::RefPtr<Cairo::Context> &cr)
{
    maxh=(get_allocation().get_height()-10)/2;
    maxw=(get_allocation().get_width()-10)/2;
    while (parent->m_ps.maxx()>maxw/scale ||parent->m_ps.maxy()>maxh/scale)
        if (scale>1)
            scale -= 1;
        else break;

    parent->get_entry_1()->set_tooltip_text(std::to_string(-maxw/scale).append(" to ").append(std::to_string(maxw/scale)));
    parent->get_entry_2()->set_tooltip_text(std::to_string(-maxh/scale).append(" to ").append(std::to_string(maxh/scale)));

    drawaxises(cr);
    drawpoints(cr);
    return true;
}



void Canvas::drawpoint(const Cairo::RefPtr<Cairo::Context> &cr, const Point &p,const double r,const double g,const double b, const int size)
{
    cr->set_source_rgb(r, g, b);
    cr->arc(cx(p.getx() * scale), cy(p.gety() * scale), size, 0, 2 * M_PI);
    cr->fill();
}

void Canvas::drawpoints(const Cairo::RefPtr<Cairo::Context> &cr)
{
    const Point *pp = parent->m_ps.getpoint();
    int count = parent->m_ps.getcount();
    for (int i = 0; i < count; i++)
        drawpoint(cr,*(pp+i),0,0,1,3);
    Pointset ps1 = (parent->m_pg).getpoints();
    pp = ps1.getpoint();
    count = ps1.getcount();
    if (count>1)
    {
        cr->set_line_width(2);
        cr->set_source_rgb(1,1,0);
        cr->move_to(cx((*pp).getx()* scale), cy((*pp).gety()* scale));
        for (int i = 1; i < count; i++)
            {
                cr->line_to(cx((*(pp + i)).getx()* scale), cy((*(pp + i)).gety()* scale));
                cr->move_to(cx((*(pp + i)).getx()* scale), cy((*(pp + i)).gety()* scale));
            }
        cr->line_to(cx((*pp).getx()* scale), cy((*pp).gety()* scale));
        cr->stroke();
    }
    for (int i = 0; i < count; i++)
        drawpoint(cr,*(pp+i),0,1,0,5);
    Point p;
    auto selrow = parent->getselectedpoint(p);
    if (selrow) drawpoint(cr,p,0.8,0,0,7);
    return;
}

void Canvas::redraw()
{
    get_window()->invalidate(false);
    return;
}

void Canvas::drawaxises(const Cairo::RefPtr<Cairo::Context> &cr)
{    
    cr->set_source_rgb(0.9, 0.9, 0.9);
    cr->rectangle(0, 0, get_allocation().get_width(), get_allocation().get_height());
    cr->fill();

    cr->set_line_width(2);
    cr->set_source_rgb(0, 0, 0);
    cr->set_line_cap(Cairo::LINE_CAP_ROUND);

//draw two lines
    cr->move_to(cx(-maxw), cy(0));
    cr->line_to(cx(maxw), cy(0));
    cr->move_to(cx(0), cy(maxh));
    cr->line_to(cx(0), cy(-maxh));
//draw x pointer
    cr->move_to(cx(maxw - 8), cy(4));
    cr->line_to(cx(maxw), cy(0));
    cr->line_to(cx(maxw-8), cy(-4));

//draw y pointer
    cr->move_to(cx(-4), cy(maxh-8));
    cr->line_to(cx(0), cy(maxh));
    cr->line_to(cx(4), cy(maxh-8));
//draw x marks
    cr->move_to(cx(-maxw*3/4), cy(-1));
    cr->line_to(cx(-maxw*3/4), cy(1));
    cr->move_to(cx(-maxw/2), cy(-1));
    cr->line_to(cx(-maxw/2), cy(1));
    cr->move_to(cx(-maxw/4), cy(-1));
    cr->line_to(cx(-maxw/4), cy(1));
    cr->move_to(cx(maxw/4), cy(-1));
    cr->line_to(cx(maxw/4), cy(1));
    cr->move_to(cx(maxw*3/4), cy(-1));
    cr->line_to(cx(maxw*3/4), cy(1));
    cr->move_to(cx(maxw/2), cy(-1));
    cr->line_to(cx(maxw/2), cy(1));
//draw y marks
    cr->move_to(cx(-1), cy(maxh*3/4));  
    cr->line_to(cx(1), cy(maxh*3/4)); 
    cr->move_to(cx(-1), cy(maxh/2));  
    cr->line_to(cx(1), cy(maxh/2)); 
    cr->move_to(cx(-1), cy(maxh/4));  
    cr->line_to(cx(1), cy(maxh/4)); 
    cr->move_to(cx(-1), cy(-maxh*3/4));  
    cr->line_to(cx(1), cy(-maxh*3/4)); 
    cr->move_to(cx(-1), cy(-maxh/2));  
    cr->line_to(cx(1), cy(-maxh/2)); 
    cr->move_to(cx(-1), cy(-maxh/4));  
    cr->line_to(cx(1), cy(-maxh/4)); 
    cr->stroke();
//draw texts
    Pango::FontDescription font;
    font.set_family("Monospace");
    font.set_weight(Pango::WEIGHT_ULTRALIGHT);
    font.set_absolute_size(8);  
//x axis texts
    cr->move_to(cx(-maxw * 3 / 4-12), cy(-1));
    auto layout = create_pango_layout((std::to_string(-maxw / 4 * 3 / scale)));
    layout->show_in_cairo_context(cr);
    cr->move_to(cx(-maxw  / 2-12), cy(-1));
    layout->set_text(std::to_string(-maxw /2 / scale));
    layout->show_in_cairo_context(cr);
    cr->move_to(cx(-maxw  / 4-12), cy(-1));
    layout->set_text(std::to_string(-maxw /4 / scale));
    layout->show_in_cairo_context(cr);
    cr->move_to(cx(maxw  / 4-12), cy(-1));
    layout->set_text(std::to_string(maxw /4 / scale));
    layout->show_in_cairo_context(cr);
    cr->move_to(cx(maxw  / 2-12), cy(-1));
    layout->set_text(std::to_string(maxw /2 / scale));
    layout->show_in_cairo_context(cr);
    cr->move_to(cx(maxw * 3 / 4-12), cy(-1));
    layout->set_text(std::to_string(maxw / 4 * 3 / scale));
    layout->show_in_cairo_context(cr);
//y axix texts
    int tw, th;
    layout->set_text(std::to_string(maxh /4*3 / scale));
    layout->get_pixel_size(tw,th);
    cr->move_to(cx(-tw-1), cy(maxh * 3 / 4+6));
    layout->show_in_cairo_context(cr);

    layout->set_text(std::to_string(maxh /2 / scale));
    layout->get_pixel_size(tw,th);
    cr->move_to(cx(-tw-1), cy(maxh / 2+6));
    layout->show_in_cairo_context(cr);

    layout->set_text(std::to_string(maxh /4 / scale));
    layout->get_pixel_size(tw,th);
    cr->move_to(cx(-tw-1), cy(maxh / 4+6));
    layout->show_in_cairo_context(cr);

    layout->set_text(std::to_string(-maxh /4 / scale));
    layout->get_pixel_size(tw,th);
    cr->move_to(cx(-tw-1), cy(-maxh / 4+6));
    layout->show_in_cairo_context(cr);

    layout->set_text(std::to_string(-maxh /2 / scale));
    layout->get_pixel_size(tw,th);
    cr->move_to(cx(-tw-1), cy(-maxh / 2+6));
    layout->show_in_cairo_context(cr);

    layout->set_text(std::to_string(-maxh /4*3 / scale));
    layout->get_pixel_size(tw,th);
    cr->move_to(cx(-tw-1), cy(-maxh / 4*3+6));
    layout->show_in_cairo_context(cr);
}

Canvas::Canvas(Hwwindow *p):parent(p)
{
    property_height_request() = 800;
    property_width_request() = 800;
    add_events(Gdk::SCROLL_MASK);
    scale = 8;
}

int Canvas::cx(const int x)
{
    return maxw+5 + x;
}

int Canvas::cy(const int y)
{
    return maxh+5 - y;
}

bool Canvas::on_scroll_event(GdkEventScroll *e)
{
    if (e->direction == GDK_SCROLL_UP)
        if (parent->m_ps.maxx()<=maxw/(scale+1)&& parent->m_ps.maxy()<=maxh/(scale+1) && scale<16)
        {
            scale++;
            redraw();
        }
    if (e->direction == GDK_SCROLL_DOWN && scale > 1)
    {
        scale--;
        redraw();
    }
    return false;
}