/***************************************************************************
** Project Name: Project 3 Fantasy Combat Game
** Author: Daniel Mesa
** Date: 11/10/19
** Descriptin:  This program creates a Gameplay object to play
** Fantasy Combat Game. A player picks two characters to
** combat and each round goes through an attack and defense.
** Each character has a special trait that may also be activated.
** The combat ends when one character dies. The user is then
** prompted to play again or quit.
******************************************************************************/

#include <iostream>
#include <random>
#include "GamePlay.hpp"

int main()
{
    GamePlay game;
    srand(time(NULL));
    game.runGame();
    
    return 0;

}
