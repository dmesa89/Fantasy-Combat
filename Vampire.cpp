/***************************************************************************
** Project Name: Project 3 Fantasy Combat Game
** Author: Daniel Mesa
** Date: 11/10/19
** Descriptin:  This is the class source code for Vampire
** It contains a default constructor, destructor, and virtual
** methods, that allow the class to attack, defend and
** set characteristic.
******************************************************************************/

#include "Vampire.hpp"

/***************************************************************************
**Vampire::Vampire()
** This is the default constructor. It initializes all the member
** variables of the base class.
******************************************************************************/
Vampire::Vampire()
{
    name = "Vampire";
    damage = 0;
    defensePoints = 0;
    armor = 1;
    strengthPoints = 18;
    characteristic = true;
    aliveOrDead = true;
}

/***************************************************************************
** int Vampire::Attack()
** This is the a method that rolls a 12 sided die once to calculate
** total damage from class. It takes in no parameters and returns
** an int that is the damage.
******************************************************************************/
int Vampire::Attack()
{
    die.setSides(12);
    damage = die.rollingDie();
    
    return damage;

}

/***************************************************************************
** void Vampire::Defend(int aDamage)
** This is the a method that rolls a 6 sided die once to calculate
** total defense from class. It takes in an int that is the damage
** from its opponent and no return.
******************************************************************************/
void Vampire::Defend(int aDamage)
{
    //set die sides for defense and roll
    die.setSides(6);
    defensePoints = die.rollingDie();
    
    //roll die to turn charm on or off
    CharacterTrait();
    
    //damage is zero if charm is on, normal if off.
    if(characteristic == false)
    {
        //calculate damage done by deducting defense roll
        //and armor points
        aDamage = aDamage - defensePoints - armor;
        
        //if damage is negative set it to zero
        if(aDamage < 0)
        {aDamage = 0;}
    }
    else
    {
        //charm is used
        std::cout << "Charm was used to defend against";
        std::cout << " the remaining attack points after " << std::endl;
        aDamage = 0;
        
    }
    
    damage = aDamage;
    
    //subtracted the damage done to strength points
    strengthPoints -= damage;
    if(strengthPoints < 0)
    { strengthPoints = 0;}
    
    //check if alive
    LifeStatus();
    
}
    
/***************************************************************************
** void Vampire::CharacterTrait()
** This is the a method that sets the character trait of the class
** Vampire rolls a 2 sided die to turn characteristic off or on.
** This method  takes in no parameters and has no return.
******************************************************************************/
void Vampire::CharacterTrait()
{
    //roll two sided die to change status of charm
    int chance;
    die.setSides(2);
    chance = die.rollingDie();
    if(chance == 1)
    {
        characteristic = false;
        
    }
    else
    {
        characteristic = true;
    }
    
}

Vampire::~Vampire()
{}
