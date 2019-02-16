//
//  main.cpp
//  Osborn
//
//  Created by SPT on 2019-02-15.
//

#include <iostream>
#include <chrono>

//
// GL_SILENCE_DEPRECATION
// Needs to be used before including Osborn.hpp
//
#ifndef GL_SILENCE_DEPRECATION
#define GL_SILENCE_DEPRECATION
#endif

#include "Osborn.hpp"
//

static const long GAME_LOOP_TIMEOUT_SECONDS = 60;

int main(int argc, const char * argv[]) {
    
    Osborn::Osborn game(1024, 768);
    game.show();
    
    //auto start = std::chrono::system_clock::now();
    auto run_game = true;
    while (run_game)
    {
        //auto now = std::chrono::system_clock::now();
        //std::chrono::duration<double> duration = now - start;
        //run_game = (duration.count() < GAME_LOOP_TIMEOUT_SECONDS);
        
        #ifdef DEBUG
        //std::cout << "Duration -> " << duration.count() << std::endl;
        #endif
    }
    
    std::cout << "Osborn exited successfully" << std::endl;
    return 0;
}

#undef GL_SILENCE_DEPRECATION
