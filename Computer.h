#include<iostream>
#include "Player.h"
using std::string;

class Computer : public Player{
    public:
        Computer();
        char makeMove();
        string getName();

    private:
        string name;
        char move;
};