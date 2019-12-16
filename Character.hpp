/***************************************************************************
** Project Name: Project 3 Fantasy Combat Game
** Author: Daniel Mesa
** Date: 11/10/19
** Descriptin:  This is the class declaration for Character
**It is an abstract base class. It contains private data members,
** set and get methods for those members.
** and pure virtual public methods that allow the  derived
**class to attack, defend and its own characteristic.
******************************************************************************/
//include guards
#ifndef Character_hpp
#define Character_hpp

#include <iostream>
#include "Die.hpp"
#include <string>

using std::string;

class Character
{
    //private data members
    protected:
    string name;
    int damage;
    int armor;
    int defensePoints;
    int strengthPoints;
    bool characteristic;
    bool aliveOrDead;
    Die die;
    
public:
    
    //set and get methods
    void setName(int aName);
    string getName();
    
    void setDamage(int aDamage);
    int getDamage();
    
    void setArmor(int anArmor);
    int getArmor();
    
    void setDefense(int aDefense);
    int getDefense();
    
    void setStrengthPoints(int aStrengthPoints);
    int getStrengthPoints();
    
    void setCharacteristic(bool aCharacteristic);
    bool getCharacteristic();
    
    void setAliveOrDead(int aLife);
    bool getAliveOrDead();
    
   
    bool LifeStatus();
    
    //pure virtual methods
    virtual void CharacterTrait() = 0;
    virtual int Attack() = 0;
    virtual void Defend(int aDamage) = 0;
    virtual ~Character() = 0;

    
    
    
    
};

#endif /* Character_hpp */
