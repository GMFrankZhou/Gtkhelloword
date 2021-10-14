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
        void redraw();

    protected:
        int maxh,maxw;
        void drawaxises(const Cairo::RefPtr<Cairo::Context> &);
        void drawpoint(const Cairo::RefPtr<Cairo::Context> &, const Point &, const int);
        void drawpoints(const Cairo::RefPtr<Cairo::Context> &, const Pointset &);
        virtual bool on_draw(const Cairo::RefPtr<Cairo::Context> &);
        Hwwindow *parent;
        int scale;
};

#endif