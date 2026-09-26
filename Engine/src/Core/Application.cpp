#include <MyEngine/Core/Application.h>

#include <iostream>

namespace MyEngine
{
    Application::Application()
    {
        std::cout << "MyEngine: Application created\n";
    }

    Application::~Application()
    {
        std::cout << "MyEngine: Application destroyed\n";
    }

    void Application::Run()
    {
        std::cout << "MyEngine: Running...\n";
    }
}