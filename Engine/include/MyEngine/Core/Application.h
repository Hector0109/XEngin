#pragma once

#include <MyEngine/Platform/Window.h>

namespace MyEngine
{
    class Application
    {
    public:
        Application();
        ~Application();

        void Run();

    private:
        void Initialize();
        void Shutdown();

        Window m_Window;
    };
}