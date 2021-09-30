#include "Hwwindow.h"
#include <gtkmm/application.h>

int main(int argc, char *argv[])
{
    Glib::RefPtr<Gtk::Application> app = Gtk::Application::create(argc,argv, "org.gtkmm.example");
    Hwwindow hww;
    return app->run(hww);


    
}
