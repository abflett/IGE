#include "window.h"

#include <stdexcept>

window::window(const std::string name, int width, int height) : m_window(SDL_CreateWindow(name.c_str(), width, height, SDL_WINDOW_RESIZABLE), &SDL_DestroyWindow)
{
    if (!m_window)
    {
        throw std::runtime_error("Failed to create window: " + std::string(SDL_GetError()));
    }
}

window::~window()
{
}

SDL_Window *window::getWindow() const
{
    return m_window.get();
}
