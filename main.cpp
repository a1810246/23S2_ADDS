#include<iostream>
#include<string>
#include"Human.h"
#include"Player.h"
#include<iostream>
#include<string>
#include"Human.h"
#include"Player.h"
#include"Referee.h"
#include"Computer.h"
using namespace std;

int main(){


    Player* test1 =nullptr;
    Player* test2 =nullptr;
    Referee ref;
    Player * result=nullptr;
    int i;

    //test2 = new Computer();
    for (i=0;i<4;i++){

        test1 = new Human();
        test2 = new Computer();
        result = ref.refGame(test1, test2);
        if (result == nullptr) {
            std::cout << "Tie" << std::endl;
        } else {
            std::cout << result->getName()<< std::endl;
        }
    }

    return 0;
}