#include <MyEngine/Core/Application.h>

#include <iostream>

namespace MyEngine
{
    Application::Application()
        : m_Window(1280, 720, "MyEngine")
    {
        Initialize();
    }

    Application::~Application()
    {
        Shutdown();
    }

    void Application::Initialize()
    {
        std::cout << "MyEngine: Initializing...\n";
    }

    void Application::Run()
    {
        std::cout << "MyEngine: Running...\n";

        while (!m_Window.ShouldClose())
        {
            m_Window.Update();
        }
    }

    void Application::Shutdown()
    {
        std::cout << "MyEngine: Shutting down...\n";
    }
}