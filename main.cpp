#include<iostream>
#include<string>
#include"Human.h"
#include"Player.h"
#include"Referee.h"
#include"Computer.h"
using namespace std;

int main(){
    Player* test1 = new Human();
    Player* test2 = new Computer();
    Referee ref;
    
    //cout<<test2.getName()<<endl;
    ref.refGame(test1, test2);
    return 0;
}