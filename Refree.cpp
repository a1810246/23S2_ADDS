#include<iostream>
#include<string>
#include "Refree.h"

Refree::Refree(){

}

Player* Refree::refGame(Player* player1, Player* player2){
    char move_human = player1->makeMove();
    char move_computer = player2->makeMove();
    if(move_human == move_computer){
        std::cout<<"It's a Tie."<<std::endl;
        return nullptr;
    }
    if(move_human == 'S'){
        std::cout<<player2->getName() <<"Wins."<<std::endl;
        return player2;
    }
    if(move_human == 'P'){
        std::cout<<player1->getName() <<"Wins."<<std::endl;
        return player1;
    }
}