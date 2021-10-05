#ifndef _HWW_
#define _HWW_
#include <gtkmm/button.h>
#include <gtkmm/label.h>
#include <gtkmm/entry.h>
#include <gtkmm/grid.h>
#include <gtkmm/applicationwindow.h>

class Hwwindow:public Gtk::ApplicationWindow
{
    public:
        Hwwindow();
        virtual ~Hwwindow();
    protected:
        void on_button_clicked();
        Gtk::Button *m_button_1;
        Gtk::Label *m_label_1;
        Gtk::Entry *m_entry_1;
        Gtk::Grid *maingrid;
};

#endif