#ifndef _HWW_
#define _HWW_
#include <gtkmm/button.h>
#include <gtkmm/applicationwindow.h>

class Hwwindow:public Gtk::ApplicationWindow
{
    public:
        Hwwindow();
        virtual ~Hwwindow();
    protected:
        void on_button_clicked();
        Gtk::Button m_button;
};


#endif