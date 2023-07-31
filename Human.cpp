#include<iostream>
#include<string>
#include"Human.h"


Human::Human(){
    name = "Human";
    char choose;
    std::cin >> choose;
    move = choose;
}
Human::Human(std::string player_name){
    name = player_name;
    char choose;
    std::cin >> choose;
    move = choose;
}

std::string Human::getName(){
    return name;
}

char Human::makeMove(){
    return move;
}