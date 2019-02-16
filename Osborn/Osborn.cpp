//
//  Osborn.cpp
//  Osborn
//
//  Created by SPT on 2019-02-10.
//

#ifndef GL_SILENCE_DEPRECATION
#define GL_SILENCE_DEPRECATION
#endif

#include "Osborn.hpp"


namespace Osborn
{
    Osborn::Osborn(ushort width, ushort height)
    {
        m_width = width;
        m_height = height;
    }
    
    Osborn::~Osborn()
    {
        
    }
    
    void display(void)
    {
        
    }
    
    bool Osborn::show()
    {
        // TODO SPT should refactor this
        char fakeParam[] = "fake";
        char *fakeargv[] = { fakeParam, NULL };
        int fakeargc = 1;
        glutInit( &fakeargc, fakeargv );
        //
        
        glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
        glutInitWindowSize((int) m_width, (int) m_height);
        glutInitWindowPosition(0,0);
        glutCreateWindow("Osborn | Episode 1");
        glutDisplayFunc(display);
        glutMainLoop();
        
        return false;
    }
    
    bool Osborn::close()
    {
        
        return false;
    }
}

#undef GL_SILENCE_DEPRECATION
