#include "intentry.h"
#include <string>
#include "hwwindow.h"

Intentry::Intentry(BaseObjectType* cobject, const Glib::RefPtr<Gtk::Builder>& builder, Hwwindow *p): 
Gtk::Entry(cobject),parent(p)
{
}

bool Intentry::isint() const
{
    int sp=1;
    std::string s = get_text();
    if (!std::isdigit(s[0]) && s[0] != '-' && s[0] != '+')
        return false;
    if(s[0]=='-' || s[0]=='+')
    {
        if (!std::isdigit(s[1]))
            return false;
        sp = 2;
    }
    int l = s.length();
    for (int i = sp; i < l;i++)
    {
        if (!std::isdigit(s[i]))
            return false;
    }
    return true;
}

void Intentry::validate_entry()
{
    std::string s;
    s = get_text();
    int i = 0;

    while (i<s.length() && s[i]==' ')
        s.erase(i, 1);

    i = s.length() - 1;
    while (i>=0 && s[i]==' ')
    {
        s.erase(i, 1);
        i--;
    }
    set_text(s);
}

bool Intentry::on_focus_out_event(GdkEventFocus *event)
{
    validate_entry();
    return false;
}
int Intentry::get_integer() const
{
    return std::stoi(get_text());
}