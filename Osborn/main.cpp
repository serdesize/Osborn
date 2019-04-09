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
int main(int argc, const char * argv[]) {
    
    auto game_name = "Osborn | Episode 1";
    Osborn::Osborn game(1024, 768, game_name);
    game.start();
    
    std::cout << "Osborn exited successfully" << std::endl;
    return 0;
}

#undef GL_SILENCE_DEPRECATION
