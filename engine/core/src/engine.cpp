#include "engine.h"
#include <iostream>

engine::engine() : m_running(true), m_window("Cool Window", 800, 600)
{
    std::cout << "Starting engine."
              << "\n";
    SDL_Init(SDL_INIT_EVERYTHING);
}

engine::~engine()
{
    SDL_Quit();
}

void engine::run()
{
    SDL_Event event;
    while (m_running)
    {
        while (SDL_PollEvent(&event))
        {
            if (event.type == SDL_EVENT_QUIT)
            {
                m_running = false;
            }
            if (event.type == SDL_EVENT_KEY_DOWN)
            {
                auto keysympressed = event.key.keysym.sym;
                if (event.key.keysym.sym == SDLK_ESCAPE)
                {
                    m_running = false;
                }
            }
        }
    }
}
