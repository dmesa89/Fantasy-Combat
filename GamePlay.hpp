/***************************************************************************
** Project Name: Project 3 Fantasy Combat Game
** Author: Daniel Mesa
** Date: 11/10/19
** Descriptin:  This is the class declaration for GamePlay.
** It contains private data members and a public metho called
**runGame that runs the combat between the two characters.
******************************************************************************/

#ifndef GamePlay_hpp
#define GamePlay_hpp

#include "Character.hpp"
#include "InputValidation.hpp"
#include <iostream>

class GamePlay
{
    private:
        Character* playerOne;
        Character* playerTwo;
        bool gameState;
    
    public:
        void runGame();

};

#endif /* GamePlay_hpp */
