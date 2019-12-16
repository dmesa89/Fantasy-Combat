/***************************************************************************
** Project Name: Project 3 Fantasy Combat Game
** Author: Daniel Mesa
** Date: 11/10/19
** Descriptin:  This is the class declaration for BlueMen
**It contains a base class Character, a default constructor
** and virtual public methods that allow the  derived
**class to attack, defend and its own characteristic.
******************************************************************************/
//include guards
#ifndef Bluemen_hpp
#define Bluemen_hpp

#include <iostream>
#include "Character.hpp"


class BlueMen : public Character
{
    private:
        int mob;

    
    public:
        //default constructor
        BlueMen();
    
        //virtual methods
        int Attack() override;
        void Defend(int aDamage) override;
        void CharacterTrait() override;
    
        //destructor
        ~BlueMen() override;

    
    
};

#endif /* Bluemen_hpp */
