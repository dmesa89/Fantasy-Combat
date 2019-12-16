/***************************************************************************
** Project Name: Project 3 Fantasy Combat Game
** Author: Daniel Mesa
** Date: 11/10/19
** Descriptin:  This is the class source code for BlueMen
** It contains a default constructor, destructor, and virtual
** methods, that allow the class to attack, defend and
** set characteristic.
******************************************************************************/

#include "Bluemen.hpp"

/***************************************************************************
**BlueMen::BlueMen()
** This is the default constructor. It initializes all the member
** variables of the base class.
******************************************************************************/
BlueMen::BlueMen()
{
    name = "Blue Men";
    damage = 0;
    defensePoints = 0;
    armor = 3;
    strengthPoints = 12;
    characteristic = true;
    aliveOrDead = true;
    mob = 3;
}

/***************************************************************************
** int BlueMen::Attack()
** This is the a method that rolls a 10 sided die twice to calculate
** total damage from class. It takes in no parameters and returns
** an int that is the damage.
******************************************************************************/
int BlueMen::Attack()
{
    die.setSides(10);
    damage = die.rollingDie() + die.rollingDie();
    
    return damage;

}

/***************************************************************************
** void BlueMen::Defend(int aDamage)
** This is the a method that rolls a 6 sided die to calculate
** total defense from class. It takes in an int that is the damage
** from its opponent and no return.
******************************************************************************/
void BlueMen::Defend(int aDamage)
{
    //set die sides for defense
    die.setSides(6);
    
    //call character trait to set roll count
    CharacterTrait();
    
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
    if(strengthPoints < 9 && mob == 3)
    {
        std::cout<<"Oh no, a Blue Man has died after "<<std::endl;
        mob = 2;
    }
    else if(strengthPoints < 5 && mob == 2)
    {
        std::cout<<"Oh no, a Blue Man has died after "<<std::endl;
        mob = 1;
    }
    else if(strengthPoints ==0 && mob == 1)
    {
        std::cout<<"Oh no, the last Blue Man has died after " <<std::endl;
        mob = 0;
    }
    
    
    //check if alive
    LifeStatus();
    
}
 
/***************************************************************************
** void BlueMen::CharacterTrait()
** This is the a method that sets the character trait of the class
** If BlueMen uses its characteristic the amount of rolls of the
** die changes. This method  takes in no parameters and
** has no return.
******************************************************************************/
void BlueMen::CharacterTrait()
{
    if(strengthPoints > 8)
    {defensePoints = die.rollingDie() + die.rollingDie() + die.rollingDie();}
    else if(strengthPoints > 4)
    { defensePoints = die.rollingDie() + die.rollingDie();}
    else
    { defensePoints = die.rollingDie();}
}

BlueMen::~BlueMen()
{}
