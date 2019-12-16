/***************************************************************************
** Project Name: Project 3 Fantasy Combat Game
** Author: Daniel Mesa
** Date: 11/10/19
** Descriptin:  This is the source code for class Character
**It contains set and get methods for the private members.
** and pure virtual public methods that allow the  derived
**class to attack, defend and its own characteristic.
******************************************************************************/

#include "Character.hpp"

/***************************************************************************
** string Character::getName()
** This method returns string name.
** It takes no parameters.
******************************************************************************/
string Character::getName()
{ return name;}

/***************************************************************************
** void Character::setDamage(int aDamage)
** This method take in an int as a parameter and sets it to damage.
** It has no return.
******************************************************************************/
void Character::setDamage(int aDamage)
{ damage = aDamage;}

/***************************************************************************
** int Character::getDamage()
** This method returns int damage.
** It takes no parameters.
******************************************************************************/
int Character::getDamage()
{return damage;}

/***************************************************************************
** void Character::setArmor(int anArmor)
** This method take in an int as a parameter and sets it to armor.
** It has no return.
******************************************************************************/
void Character::setArmor(int anArmor)
{ armor = anArmor;}

/***************************************************************************
** int Character::getArmor()
** This method returns int armor
** It takes no parameters.
******************************************************************************/
int Character::getArmor()
{ return armor;}

/***************************************************************************
** void Character::setDefense(int aDefense)
** This method take in an int as a parameter and sets it to defense
** It has no return.
******************************************************************************/
void Character::setDefense(int aDefense)
{ defensePoints = aDefense;}

/***************************************************************************
** int Character::getDefense()
** This method returns int defense points.
** It takes no parameters.
******************************************************************************/
int Character::getDefense()
{ return defensePoints;}

/***************************************************************************
** void Character::setStrengthPoints(int aStrengthPoints)
** This method take in an int as a parameter and sets it to strength.
** It has no return.
******************************************************************************/
void Character::setStrengthPoints(int aStrengthPoints)
{ strengthPoints = aStrengthPoints;}

/***************************************************************************
**int Character::getStrengthPoints()
** This method returns int strength points.
** It takes no parameters.
******************************************************************************/
int Character::getStrengthPoints()
{ return strengthPoints;}

/***************************************************************************
** void Character::setCharacteristic(bool aCharacteristic)
** This method take in a bool as a parameter and sets it to
** characteristic. It has no return.
******************************************************************************/
void Character::setCharacteristic(bool aCharacteristic)
{ characteristic = aCharacteristic;}

/***************************************************************************
**bool Character::getCharacteristic()
** This method returns bool characteristic.
** It takes no parameters.
******************************************************************************/
bool Character::getCharacteristic()
{ return characteristic; }

/***************************************************************************
** void Character::setAliveOrDead(int aLife)
** This method take in a bool as a parameter and sets it to
** aliveordead. It has no return.
******************************************************************************/
void Character::setAliveOrDead(int aLife)
{ aliveOrDead = aLife;}

/***************************************************************************
**bool Character::getAliveOrDead()
** This method returns bool alive or dead.
** It takes no parameters.
******************************************************************************/
bool Character::getAliveOrDead()
{ return aliveOrDead; }

/***************************************************************************
**bool Character::getAliveOrDead()
** This method returns bool to check if alive or dead.
** It takes no parameters.
******************************************************************************/
bool Character::LifeStatus()
{
    if(strengthPoints == 0)
    { aliveOrDead = false;}
    
    return aliveOrDead;

}

Character::~Character(){}
