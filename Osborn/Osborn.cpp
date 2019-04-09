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
    Osborn::Osborn(ushort width, ushort height, string& name )
    {
        m_width = width;
        m_height = height;
        
        glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);
        
        /* Initialize the library */
        glfwInit();

        /* Create a windowed mode window and its OpenGL context */
        m_window = glfwCreateWindow(width, height, name, NULL, NULL);
    }
    
    Osborn::~Osborn()
    {
        
    }
    
    void Osborn::start()
    {
        /* Make the window's context current */
        glfwMakeContextCurrent(m_window);
        
        /* Loop until the user closes the window */
        while (!glfwWindowShouldClose(m_window))
        {
            /* Render here */
            glClear(GL_COLOR_BUFFER_BIT);
            
            /* Swap front and back buffers */
            glfwSwapBuffers(m_window);
            
            /* Poll for and process events */
            glfwPollEvents();
        }
        
        glfwTerminate();
    }
}

#undef GL_SILENCE_DEPRECATION
