#include<iostream>
#pragma once
#include string
using namespace std;

class Player{
    public:
        virtual char makeMove();
        virtual string getName();
};