#include<iostream>
#include"Player.h"
#include"Human.h"
using std::string;

Human::Human(){
    getName();
    makeMove();
}

Human::Human(string player_name){
    name = player_name;
    makeMove();
}

string Human::getName(){
    name = "Human";
    return name;
}

char makeMove(){
    
}