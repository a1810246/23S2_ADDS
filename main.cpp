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
    Player * result = ref.refGame(test1, test2);
    if (result == nullptr) {
        std::cout << "Tie" << std::endl;
    } else {
        std::cout << result->getName()<< std::endl;
    }

    return 0;
}