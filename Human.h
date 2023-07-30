#include<iostream>
#include"Player.h"
#pragma once
using std::string;

class Human : public Player{
    public:
        Human();
        Human(string player_name);
        char makeMove();
        string getName();

    private:
        string name;
        char move;
};

