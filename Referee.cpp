#include<iostream>
#include<string>
#include "Referee.h"

Referee::Referee(){

}

Player* Referee::refGame(Player* player1, Player* player2){
    char move_human = player1->makeMove();
    char move_computer = player2->makeMove();
    if(move_human == move_computer){
        std::cout<<"Tie"<<std::endl;
        return nullptr;
    }
    if(move_human == 'P'){
        std::cout<<player2->getName() <<std::endl;
        return player1;
    }
    if(move_human == 'S'){
        std::cout<<player1->getName() <<std::endl;
        return player2;
    }
    Player * winner = 
}