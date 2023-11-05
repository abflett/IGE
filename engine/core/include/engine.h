#pragma once

#include "window.h"

class engine
{
public:
    engine();
    ~engine();
    void run();

private:
    bool m_running;
    window m_window;
};
