#ifndef _INTENTRY_
#define _INTENTRY_

#include <gtkmm/entry.h>
#include <gtkmm/builder.h>
#include <string>

class Hwwindow;
class Intentry : public Gtk::Entry
{
    public:
        Intentry(BaseObjectType *, const Glib::RefPtr<Gtk::Builder> &, Hwwindow *);
        void validate_entry();
        bool isint(std::string);

    private:
        virtual bool on_focus_out_event(GdkEventFocus *event);
        Hwwindow *parent;
};

#endif