#ifndef _CANVAS_
#define _CANVAS_

#include <gtkmm/drawingarea.h>

class Hwwindow;
class Canvas : public Gtk::DrawingArea
{
    public:
        Canvas(Hwwindow *p);
        int cx(const int);
        int cy(const int);
        int get_maxh() const { return maxh; }
        int get_maxw() const { return maxw; }

    private:
        int maxh,maxw;
        virtual bool on_draw(const Cairo::RefPtr<Cairo::Context> &);
        Hwwindow *parent;
};


#endif