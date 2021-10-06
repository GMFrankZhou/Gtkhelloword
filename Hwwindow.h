#ifndef _HWW_
#define _HWW_
#include <gtkmm/button.h>
#include <gtkmm/label.h>
#include <gtkmm/entry.h>
#include <gtkmm/listbox.h>
#include <gtkmm/box.h>
#include <gtkmm/drawingarea.h>
#include <gtkmm/applicationwindow.h>
#include <cairomm/context.h>

class Hwwindow:public Gtk::ApplicationWindow
{
    public:
        Hwwindow();
        virtual ~Hwwindow();
    private:
        void m_button_1_on_clicked();
        bool m_draw_on_draw(const Cairo::RefPtr<Cairo::Context> cr);
        int cx(const int);
        int cy(const int);
        Gtk::Button *m_button_1;
        Gtk::Button *m_button_2;
        Gtk::Label *m_label_1;
        Gtk::Label *m_label_2;
        Gtk::Entry *m_entry_1;
        Gtk::Entry *m_entry_2;
        Gtk::ListBox *m_listbox;
        Gtk::DrawingArea *m_draw;
        Gtk::Box *m_mainbox;
        int m_draw_maxh,m_draw_maxw;
};

#endif