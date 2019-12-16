/***************************************************************************
** Project Name: Project 3 Fantasy Combat Game
** Author: Daniel Mesa
** Date: 11/10/19
** Descriptin:  This is the class declaration for Vampire
**It contains a base class Character, a default constructor
** and virtual public methods that allow the  derived
**class to attack, defend and its own characteristic.
******************************************************************************/
//include guards
#ifndef Vampire_hpp
#define Vampire_hpp

#include <iostream>
#include "Character.hpp"

class Vampire : public Character
{
    private:
        
    
    public:
        //default constructor
        Vampire();
    
        //virtual methods
        int Attack() override;
        void Defend(int aDamage) override;
        void CharacterTrait() override;
    
        //destructor
        ~Vampire() override;

    
    
    
};

#endif /* Vampire_hpp */
