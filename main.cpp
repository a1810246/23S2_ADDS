#include<iostream>
#include<string>
#include"Human.h"
#include"Player.h"
#include"Referee.h"
#include"Computer.h"
using namespace std;

int main(){
    Human test1;
    Computer test2;
    Player* test1 = new Human();
    Player* test2 = test2.makeMove();
    Referee ref;

    //cout<<test2.getName()<<endl;
    Player * result = ref.refGame(test1, test2);
    if (result == nullptr) {
        std::cout << "Tie" << std::endl;
    } else {
        std::cout << result->getName()<< std::endl;
    }

    return 0;
}