/***************************************************************************
** Project Name: Project 3 Fantasy Combat Game
** Author: Daniel Mesa
** Date: 11/10/19
** Descriptin:  This is the class declaration for Barbarian
**It contains a base class Character, a default constructor
** and virtual public methods that allow the  derived
**class to attack, defend and its own characteristic.
******************************************************************************/
//include guards
#ifndef Barbarian_hpp
#define Barbarian_hpp

#include <iostream>
#include "Character.hpp"

class Barbarian : public Character
{
    private:
    
    public:
        //default constructor
        Barbarian();
        
        //virtual methods
        int Attack() override;
        void Defend(int aDamage) override;
        void CharacterTrait() override;
    
        //destructor
        ~Barbarian() override;
};

#endif /* Barbarian_hpp */
