#include<iostream>
#include"Player.h"
#include"Human.h"
using std::string;

Human::Human(){
    name = 'Human';
    makeMove();
}

Human::Human(string player_name){
    getName();
    makeMove();
}

string Human::getName(){
    
}