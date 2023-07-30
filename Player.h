#include<iostream>
#pragma once
using namespace std;

class Player{
    public:
        virtual char makeMove();
        virtual string getName();
};