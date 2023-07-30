#include<iostream>
#include<string>
#include"Player.h"
#include"Computer.h"


Computer::Computer(){
    getName();
    makeMove();
}

char Computer::makeMove(){
    move = 'R';
    return move;
}

std::string Computer::getName(){
    name = "Computer";
    return name;
}





