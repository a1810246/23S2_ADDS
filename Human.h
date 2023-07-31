#include<iostream>
#include<string>
#include"Player.h"
#pragma once


class Human : public Player{
    public:
        Human();
        Human(std::string player_name);
        char makeMove();
        std::string getName();

    private:
        std::string name;
        char move;
};

