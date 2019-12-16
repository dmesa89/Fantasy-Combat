/***************************************************************************
** Project Name: Project 3 Fantasy Combat Game
** Author: Daniel Mesa
** Date: 11/10/19
** Descriptin:  This is the class source code for Harry Potter
** It contains a default constructor, destructor, and virtual
** methods, that allow the class to attack, defend and
** set characteristic.
******************************************************************************/

#include "HarryPotter.hpp"
using std::cout;
using std::endl;


/***************************************************************************
** HarryPotter::HarryPotter()
** This is the default constructor. It initializes all the member
** variables of the base class.
******************************************************************************/
HarryPotter::HarryPotter()
{
    name = "Harry Potter";
    damage = 0;
    defensePoints = 0;
    armor = 0;
    strengthPoints = 10;
    characteristic = true;
    aliveOrDead = true;
}

/***************************************************************************
** int HarryPotter::Attack()
** This is the a method that rolls a 6 sided die twice to calculate
** total damage from class. It takes in no parameters and returns
** an int that is the damage.
******************************************************************************/
int HarryPotter::Attack()
{
    die.setSides(6);
    damage = die.rollingDie() + die.rollingDie();
    
    return damage;

}

/***************************************************************************
** void HarryPotter::Defend(int aDamage)
** This is the a method that rolls a 6 sided die twice to calculate
** total defense from class. It takes in an int that is the damage
** from its opponent and no return.
******************************************************************************/
void HarryPotter::Defend(int aDamage)
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
    
    if(aliveOrDead == false && characteristic == true)
    {
        cout <<"Harry has died...But, wait!" <<endl;
        CharacterTrait();
        
    }
}

/***************************************************************************
** void HarryPotter::CharacterTrait()
** This is the a method that sets the character trait of the class
** If HarryPotter strength becomes zero, it allows HarryPotter
** to use its characteristic to keep playing. This method
** takes in no parameters and has no return.
******************************************************************************/
void HarryPotter::CharacterTrait()
{
    //set strength points to 20 and characteristic to false to only be used once
    //set aliveordead to true for alive
    cout << "Harry used Hogwarts and returns twice as strong after" << endl;
    strengthPoints = 20;
    aliveOrDead = true;
    characteristic = false;
}

HarryPotter::~HarryPotter()
{}
