#pragma once

#include <SDL3/SDL.h>

#include <memory>
#include <string>

class window
{

public:
    window(const std::string name, int width, int height);
    ~window();
    SDL_Window *getWindow() const;

private:
    std::unique_ptr<SDL_Window, decltype(&SDL_DestroyWindow)> m_window;
};
