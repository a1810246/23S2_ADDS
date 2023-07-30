#include<iostream>
#include<string>
#include"Computer.h"


Computer::Computer(){
    name = "Computer";
    makeMove();
}

char Computer::makeMove(){
    move = 'R';
    return move;
}

std::string Computer::getName(){
    return name;
}





