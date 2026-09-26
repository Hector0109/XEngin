#include <MyEngine/Platform/Window.h>

#include <GLFW/glfw3.h>
#include <iostream>

namespace MyEngine
{
    Window::Window(int width, int height, const char* title)
    {
        if (!glfwInit())
        {
            std::cerr << "MyEngine: Failed to initialize GLFW\n";
            return;
        }

        m_Window = glfwCreateWindow(
            width,
            height,
            title,
            nullptr,
            nullptr
        );

        if (!m_Window)
        {
            std::cerr << "MyEngine: Failed to create window\n";
            glfwTerminate();
            return;
        }

        glfwMakeContextCurrent(m_Window);

        std::cout << "MyEngine: Window created\n";
    }

    Window::~Window()
    {
        if (m_Window)
        {
            glfwDestroyWindow(m_Window);
        }

        glfwTerminate();

        std::cout << "MyEngine: Window destroyed\n";
    }

    void Window::Update()
    {
        glfwSwapBuffers(m_Window);
        glfwPollEvents();
    }

    bool Window::ShouldClose() const
    {
        return glfwWindowShouldClose(m_Window);
    }
}