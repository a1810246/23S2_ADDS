#include<iostream>
#include"Player.h"
#include"Computer.h"
using std::string;

Computer::Computer(){
    getName();
    makeMove();
}

char Computer::makeMove(){
    move = 'R';
    return move;
}

string Computer::getName(){
    name = "Computer";
    return name;
}





