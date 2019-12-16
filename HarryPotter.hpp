/***************************************************************************
** Project Name: Project 3 Fantasy Combat Game
** Author: Daniel Mesa
** Date: 11/10/19
** Descriptin:  This is the class declaration for Harry Potter
**It contains a base class Character, a default constructor
** and virtual public methods that allow the  derived
**class to attack, defend and its own characteristic.
******************************************************************************/

//include guards
#ifndef HarryPotter_hpp
#define HarryPotter_hpp

#include <iostream>
#include "Character.hpp"

class HarryPotter : public Character
{
    private:
    
    
    public:
        //default constructor
        HarryPotter();
        
        //virtual methods
        int Attack() override; 
        void Defend(int aDamage) override;
        void CharacterTrait() override;
    
        //destructor
        ~HarryPotter() override; 

};

#endif /* HarryPotter_hpp */
