//
//  Game.hpp
//  Project 1
//
//  Created by Chet MacArthur on 1/9/19.
//  Copyright © 2019 Chet MacArthur. All rights reserved.
//

#ifndef Game_h
#define Game_h
//#include "Arena.h"
class Arena;

class Game
{
public:
    // Constructor/destructor
    Game(int rows, int cols, int nZombies);
    ~Game();
    
    // Mutators
    void play();
    
private:
    Arena* m_arena;
};
#endif /* Game_hpp */
