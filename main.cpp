#include "Hwwindow.h"
#include <gtkmm/application.h>

int main()
{
    auto app = Gtk::Application::create("zhou.jiahong.helloworld");
    Hwwindow hww;
    return app->run(hww);

}
