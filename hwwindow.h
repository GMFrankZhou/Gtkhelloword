#ifndef _HWW_
#define _HWW_
#include <gtkmm/button.h>
#include <gtkmm/label.h>
#include <gtkmm/entry.h>
#include <gtkmm/listbox.h>
#include <gtkmm/box.h>
#include <gtkmm/liststore.h>
#include "intentry.h"
#include <gtkmm/drawingarea.h>
#include <gtkmm/applicationwindow.h>
#include <gtkmm/treeview.h>
#include <gtkmm/scrolledwindow.h>
#include "point.h"
#include "pointset.h"
#include "polygon.h"
class Canvas;

class Hwwindow : public Gtk::ApplicationWindow
{
    public:
        Hwwindow();
        virtual ~Hwwindow();
        Intentry *get_entry_1() const { return m_entry_1; }
        Intentry *get_entry_2() const { return m_entry_2; }
        Pointset m_ps;
        Polygon m_pg;
        class errormsg
        {
            public:
                errormsg(const std::string m): msg(m) {}
                void poperror() const;
            private:
                std::string msg;
        };
        Gtk::TreeModel::iterator getselectedpoint(Point &) const;

    private:
        void m_button_1_on_clicked();
        void m_button_2_on_clicked();
        void m_treeview_on_selected();
        void setuplistbox();
        void addpointtolist(const Point &);
        Gtk::Button *m_button_1;
        Gtk::Button *m_button_2;
        Intentry *m_entry_1;
        Intentry *m_entry_2;

        Gtk::TreeView *m_treeview;
        Glib::RefPtr<Gtk::ListStore> m_liststore;
        Gtk::TreeModel::ColumnRecord m_columns;
        Gtk::TreeModelColumn<int> xcol, ycol;

        Gtk::Box *m_mainbox;
        Gtk::ScrolledWindow *m_scrolledwindow;
        Canvas *m_drawing;        
        Gtk::Label *m_label_1;
        Gtk::Label *m_label_2;

};

#endif