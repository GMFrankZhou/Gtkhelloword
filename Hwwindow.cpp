#include "Hwwindow.h"
#include <iostream>



Hwwindow::Hwwindow():m_button("Hello World!")
{
    
    m_button.signal_clicked().connect(sigc::mem_fun(*this,&Hwwindow::on_button_clicked));
    m_button.set_margin_start(200);
    add(m_button);
    m_button.show();
}

Hwwindow::~Hwwindow()
{

}

void Hwwindow::on_button_clicked()
{
    std::cout << "Hello world!\n";
}