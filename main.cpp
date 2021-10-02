#include "Hwwindow.h"
#include <gtkmm/application.h>

int main()
{
    auto app = Gtk::Application::create();
    Hwwindow hww;
    return app->run(hww);

}
