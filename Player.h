#include<iostream>
#include<string>
#pragma once

class Player{
    public:
        virtual char makeMove();
        virtual std::string getName();
};