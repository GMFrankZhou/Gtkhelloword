#ifndef _HWW_
#define _HWW_
#include <gtkmm/button.h>
#include <gtkmm/label.h>
#include <gtkmm/entry.h>
#include <gtkmm/listbox.h>
#include <gtkmm/box.h>
#include "intentry.h"
#include <gtkmm/drawingarea.h>
#include <gtkmm/applicationwindow.h>
#include <gtkmm/listviewtext.h>
#include <gtkmm/scrolledwindow.h>

class Canvas;
class Hwwindow : public Gtk::ApplicationWindow
{
    public:
        Hwwindow();
        virtual ~Hwwindow();
        Intentry *get_entry_1() const { return m_entry_1; }
        Intentry *get_entry_2() const { return m_entry_2; }


    private:
        void m_button_1_on_clicked();
        void m_button_2_on_clicked();
        Gtk::Button *m_button_1;
        Gtk::Button *m_button_2;
        Intentry *m_entry_1;
        Intentry *m_entry_2;
        Gtk::ListViewText *m_listviewtext;
        Gtk::Box *m_mainbox;
        Gtk::ScrolledWindow *m_scrolledwindow;
        Canvas *m_drawing;        
        Gtk::Label *m_label_1;
        Gtk::Label *m_label_2;
};

#endif