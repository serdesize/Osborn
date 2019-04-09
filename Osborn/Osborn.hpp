//
//  Osborn.hpp
//  Osborn
//
//  Created by SPT on 2019-02-10.
//

#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <GLUT/glut.h>
#include <OpenGL/gl.h>
#include <OpenGL/glu.h>
#include <GLFW/glfw3.h>

using ushort = unsigned short;
using string = const char*;

namespace Osborn
{    
    class Osborn
    {
    private:
        ushort m_width;
        ushort m_height;
        GLFWwindow*    m_window;
        
    public:
        Osborn(ushort width, ushort height, string& name);
        ~Osborn();
        
        void start();
    };
}
