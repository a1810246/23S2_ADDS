#include<iostream>
#include<string>
#include"Human.h"


Human::Human(){
    name = "Human";
    makeMove();
}

Human::Human(std::string player_name){
    name = player_name;
    makeMove();
}

std::string Human::getName(){
    return name;
}

char Human::makeMove(){
    char move;
    std::cin >> move;
    return move;
}