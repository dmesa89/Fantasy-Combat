/***************************************************************************
** Project Name: Project 3 Fantasy Combat Game
** Author: Daniel Mesa
** Date: 11/10/19
** Descriptin:  This is the source code for class GamePlay.
**it contains one method that runs the menu choice for
** players to choose characters and the combat between
** the characters.
******************************************************************************/

#include "GamePlay.hpp"
#include "Character.hpp"
#include "InputValidation.hpp"
#include "Vampire.hpp"
#include "Barbarian.hpp"
#include "Bluemen.hpp"
#include "Medusa.hpp"
#include "HarryPotter.hpp"
#include <iostream>


using std::cout;
using std::endl;

/***************************************************************************
**void GamePlay::runGame()
** This method runs the menu choice for players to choose
** characters and the combat between the characters.
** It takes no parameters and has no return.
******************************************************************************/
void GamePlay::runGame()
{
    bool gameState = true;
    
    while(gameState == true)
    {
        //choice for each character
        int optionOne;
        int optionTwo;
        
        //character options
        cout <<"Welcome to Fantasy Combat Game." <<endl;
        cout <<"Below is a list of fighters to choose from." <<endl;
        cout <<"1: Vampire" <<endl;
        cout <<"2: Barbarian" <<endl;
        cout <<"3: Blue Men" <<endl;
        cout <<"4: Medusa" <<endl;
        cout <<"5: Harry Potter" <<endl;
        cout << "Please enter an option choice for player One:  ";
        optionOne = inputValidation();
        while(optionOne < 1 || optionOne > 5)
        {
            cout << "Please enter a valid option: ";
            optionOne = inputValidation();
        }
        cout << "Please enter an option choice for player Two:  ";
        optionTwo = inputValidation();
        while(optionTwo < 1 || optionTwo > 5)
        {
            cout << "Please enter a valid option: ";
            optionTwo = inputValidation();
        }
        
        //choice for player one
        switch(optionOne)
        {
            case 1: playerOne = new Vampire;
                break;
            case 2: playerOne = new Barbarian;
                break;
            case 3: playerOne = new BlueMen;
                break;
            case 4: playerOne = new Medusa;
                break;
            case 5: playerOne = new HarryPotter;
                break;
        }
        //choice for player two
        switch(optionTwo)
        {
            case 1: playerTwo = new Vampire;
                break;
            case 2: playerTwo = new Barbarian;
                break;
            case 3: playerTwo = new BlueMen;
                break;
            case 4: playerTwo = new Medusa;
                break;
            case 5: playerTwo = new HarryPotter;
                break;
        }
            
        //bool to loop through combat
        bool keepPlaying = true;
        int damage;
        
        //while each player is still alive keep looping through combat
        while(keepPlaying == true)
        {
            //call attack for player 1 and defend for player 2
            //display information
            cout<<"P1: " <<playerOne->getName();
            cout <<" attacks P2: " <<playerTwo->getName();
            cout << " [" <<playerTwo->getArmor() <<"A/";
            cout <<playerTwo->getStrengthPoints() <<"S]";
            damage = playerOne->Attack();
            cout <<" with " <<damage << " damage points!" <<endl;
            playerTwo->Defend(damage);
            cout <<"P2 defends attack with " <<playerTwo->getDefense();
            cout <<" defense points and " <<playerTwo->getArmor();
            cout <<" armor points!" << endl;
            damage = playerTwo->getDamage();
            cout <<"P1 inflicted " <<damage <<" points!" <<endl;
            cout <<"P2 has " <<playerTwo->getStrengthPoints();
            cout <<" strength points left!\n" <<endl;
            //check if player two is alive after attack
            if(playerTwo->getAliveOrDead() == false)
            {
                //if player two is dead, end the loop
                keepPlaying = false;
                cout <<"Player two has died.\n" <<endl;
            }
            else
            {
                //call attack for player 2 and defend for player 1
                //display information
                cout<<"P2: " <<playerTwo->getName();
                cout <<" attacks P1: " <<playerOne->getName();
                cout << " [" <<playerOne->getArmor() <<"A/";
                cout <<playerOne->getStrengthPoints() <<"S]";
                damage = playerTwo->Attack();
                cout <<" with " <<damage << " damage points!" <<endl;
                playerOne->Defend(damage);
                cout <<"P1 defends attack with " <<playerOne->getDefense();
                cout <<" defense points and " <<playerOne->getArmor();
                cout <<" armor points!" << endl;
                damage = playerOne->getDamage();
                cout <<"P2 inflicted " <<damage <<" points!" <<endl;
                cout <<"P1 has " <<playerOne->getStrengthPoints();
                cout <<" strength points left!\n" <<endl;
            }
            //check if player is alive after every attack
            if(playerOne->getAliveOrDead() == false)
            {
                //if player one is dead end the loop
                keepPlaying = false;
                cout <<"Player one has died.\n" <<endl;
            }
        }
        
        //give player option of playing again
        int choice;
        cout<<"Would you like to " <<endl;
        cout<<"1: Play again" <<endl;
        cout<<"2: Quit" <<endl;
        cout<<"Please enter an option: ";
        choice = inputValidation();
        while(choice != 1 && choice != 2)
        {
            cout <<"Please enter a valid choice." <<endl;
            choice = inputValidation();
        }
        //free memory
        if(choice == 2)
        {gameState = false;}
        delete playerOne;
        delete playerTwo;
        
    }

    
}


