#include<iostream>
#include<string>
#include"Player.h"
#include"Human.h"


Human::Human(){
    getName();
    makeMove();
}

Human::Human(std::string player_name){
    name = player_name;
    makeMove();
}

std::string Human::getName(){
    name = "Human";
    return name;
}

char makeMove(){
    std::cout<<"Enter move: ";
    std::cin >> move;
    return move;
}