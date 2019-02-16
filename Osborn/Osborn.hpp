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

using ushort = unsigned short;

namespace Osborn
{
    class Osborn
    {
    private:
        ushort m_width;
        ushort m_height;
        
    public:
        Osborn(ushort width, ushort height);
        ~Osborn();
        
        bool show();
        bool close();
    };
}
