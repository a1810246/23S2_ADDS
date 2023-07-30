#include<iostream>
#include<string>
#pragma once
#include "Player.h"


class Computer : public Player{
    public:
        Computer();
        char makeMove();
        std::string getName();

    private:
        std::string name;
        char move;
};