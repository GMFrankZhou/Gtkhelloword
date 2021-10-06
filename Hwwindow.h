#ifndef _HWW_
#define _HWW_
#include <gtkmm/button.h>
#include <gtkmm/label.h>
#include <gtkmm/entry.h>
#include <gtkmm/listbox.h>
#include <gtkmm/box.h>
#include <gtkmm/drawingarea.h>
#include <gtkmm/applicationwindow.h>

class Hwwindow;
class Canvas : public Gtk::DrawingArea
{
    public:
        Canvas(Hwwindow *p);
        virtual ~Canvas();
        int cx(const int);
        int cy(const int);
        int get_maxh() const { return maxh; }
        int get_maxw() const { return maxw; }

    private:
        int maxh,maxw;
        bool on_draw(const Cairo::RefPtr<Cairo::Context> &) override;
        Hwwindow *parent;
};

class Hwwindow : public Gtk::ApplicationWindow
{
    public:
        Hwwindow();
        virtual ~Hwwindow();
        Gtk::Entry *get_entry_1() const { return m_entry_1; }
        Gtk::Entry *get_entry_2() const { return m_entry_2; }
        
    private:
        void m_button_1_on_clicked();
        Gtk::Button *m_button_1;
        Gtk::Button *m_button_2;
        Gtk::Label *m_label_1;
        Gtk::Label *m_label_2;
        Gtk::Entry *m_entry_1;
        Gtk::Entry *m_entry_2;
        Gtk::ListBox *m_listbox;
        Gtk::Box *m_mainbox;
        Canvas *m_drawing;
};

#endif