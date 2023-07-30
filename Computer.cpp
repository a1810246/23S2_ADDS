#include<iostream>
#include<string>
#include "Player.h"

class Computer : public Player{
    public:
        char makeMove();
        string getName();

    private:
        string name;
        char move;
};