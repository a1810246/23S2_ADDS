#include<iostream>
#pragma once
using std::string;

class Player{
    public:
        virtual char makeMove();
        virtual string getName();
};