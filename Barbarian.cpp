/***************************************************************************
** Project Name: Project 3 Fantasy Combat Game
** Author: Daniel Mesa
** Date: 11/10/19
** Descriptin:  This is the class source code for Barbarian
** It contains a default constructor, destructor, and virtual
** methods, that allow the class to attack, defend and
** set characteristic.
******************************************************************************/

#include "Barbarian.hpp"


/***************************************************************************
**Barbarian::Barbarian()
** This is the default constructor. It initializes all the member
** variables of the base class.
******************************************************************************/
Barbarian::Barbarian()
{
    name = "Barbarian";
    damage = 0;
    defensePoints = 0;
    armor = 0;
    strengthPoints = 12;
    characteristic = true;
    aliveOrDead = true;
}

/***************************************************************************
** int Barbarian::Attack()
** This is the a method that rolls a 6 sided die twice to calculate
** total damage from class. It takes in no parameters and returns
** an int that is the damage.
******************************************************************************/
int Barbarian::Attack()
{
    die.setSides(6);
    damage = die.rollingDie() + die.rollingDie();
    
    return damage;

}

/***************************************************************************
** void Barbarian::Defend(int aDamage)
** This is the a method that rolls a 6 sided die twice to calculate
** total defense from class. It takes in an int that is the damage
** from its opponent and no return.
******************************************************************************/
void Barbarian::Defend(int aDamage)
{
    //set die sides for defense and roll
    die.setSides(6);
    defensePoints = die.rollingDie() + die.rollingDie();
    
    //calculate damage done by deducting defense roll
    //and armor points
    aDamage = aDamage - defensePoints - armor;
        
    //if damage is negative set it to zero
    if(aDamage < 0)
    {aDamage = 0;}
    
    damage = aDamage;

    //subtracted the damage done to strength points
    strengthPoints -= damage;
    if(strengthPoints < 0)
    { strengthPoints = 0;}
    
    //check if alive
    LifeStatus();
    
}

/***************************************************************************
** void Barbarian::CharacterTrait()
** This is the a method that sets the character trait of the class
** This method  takes in no parameters and has no return.
******************************************************************************/
void Barbarian::CharacterTrait()
{
    characteristic = true;
}

Barbarian::~Barbarian()
{}
