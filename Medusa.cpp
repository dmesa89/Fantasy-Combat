/***************************************************************************
** Project Name: Project 3 Fantasy Combat Game
** Author: Daniel Mesa
** Date: 11/10/19
** Descriptin:  This is the class source code for Medusa
** It contains a default constructor, destructor, and virtual
** methods, that allow the class to attack, defend and
** set characteristic.
******************************************************************************/
#include "Medusa.hpp"
using std::cout;
using std::endl;

/***************************************************************************
**Medusa::Medusa()
** This is the default constructor. It initializes all the member
** variables of the base class.
******************************************************************************/
Medusa::Medusa()
{
    name = "Medusa";
    damage = 0;
    defensePoints = 0;
    armor = 3;
    strengthPoints = 8;
    characteristic = true;
    aliveOrDead = true;
}

/***************************************************************************
** int Medusa::Attack()
** This is the a method that rolls a 6 sided die twice to calculate
** total damage from class. It takes in no parameters and returns
** an int that is the damage.
******************************************************************************/
int Medusa::Attack()
{
    die.setSides(6);
    damage = die.rollingDie() + die.rollingDie();
    
    //call character trait if damager equals 12
    if(damage == 12)
    { CharacterTrait(); }
    
    return damage;

}

/***************************************************************************
** void Medusa::Defend(int aDamage)
** This is the a method that rolls a 6 sided die once to calculate
** total defense from class. It takes in an int that is the damage
** from its opponent and no return.
******************************************************************************/
void Medusa::Defend(int aDamage)
{
    //set die sides for defense and roll
    die.setSides(6);
    defensePoints = die.rollingDie();
    
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
    
    LifeStatus(); 
    
}


/***************************************************************************
** void Medusa::CharacterTrait()
** This is the a method that sets the character trait of the class
** If Medusa uses her characteristic the opponent dies.
** damage is set to 100. This method
** takes in no parameters and has no return.
******************************************************************************/
void Medusa::CharacterTrait()
{
    cout << "Medusa's eyes turn you to stone!" << endl;
    damage = 100;
}

Medusa::~Medusa()
{}
