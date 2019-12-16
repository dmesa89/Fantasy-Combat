/***************************************************************************
** Project Name: Project 3 Fantasy Combat Game
** Author: Daniel Mesa
** Date: 11/10/19
** Descriptin:  This is the class declaration for Medusa
**It contains a base class Character, a default constructor
** and virtual public methods that allow the  derived
**class to attack, defend and its own characteristic.
******************************************************************************/
//include guards
#ifndef Medusa_hpp
#define Medusa_hpp

#include <iostream>
#include "Character.hpp"

class Medusa : public Character
{
private:
    
    
public:
    //default constructor
    Medusa();
    
    //virtual methods
    int Attack() override;
    void Defend(int aDamage) override;
    void CharacterTrait() override;
    
    //virtual destructor
    ~Medusa() override;

    
    
};

#endif /* Medusa_hpp */
