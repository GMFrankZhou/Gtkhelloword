#ifndef _CANVAS_
#define _CANVAS_

#include <gtkmm/drawingarea.h>

class Hwwindow;
class Point;
class Pointset;
class Canvas : public Gtk::DrawingArea
{
    public:
        Canvas(Hwwindow *p);
        int cx(const int);
        int cy(const int);
        int get_maxh() const { return maxh; }
        int get_maxw() const { return maxw; }
        int get_scale() const {return scale;}
        void redraw();

    protected:
        int maxh,maxw;
        void drawaxises(const Cairo::RefPtr<Cairo::Context> &);
        void drawpoint(const Cairo::RefPtr<Cairo::Context> &, const Point &,const double,const double,const double,const int);
        void drawpoints(const Cairo::RefPtr<Cairo::Context> &);
        virtual bool on_draw(const Cairo::RefPtr<Cairo::Context> &);
        virtual bool on_scroll_event(GdkEventScroll *);
        Hwwindow *parent;
        int scale;
};

#endif