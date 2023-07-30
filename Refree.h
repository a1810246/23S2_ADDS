#include<iostream>
#include<string>
#pragma once
#include"Player.h"

class Refree{
    public:
    Refree();
    Player* refGame(Player* player1, Player* player2);
};