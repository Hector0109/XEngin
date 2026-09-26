#pragma once

struct GLFWwindow;

namespace MyEngine
{
    class Window
    {
    public:
        Window(int width, int height, const char* title);
        ~Window();

        void Update();
        bool ShouldClose() const;

    private:
        GLFWwindow* m_Window = nullptr;
    };
}