#include "Merchant.h"
#include "Party.h"
#include <iostream>

using namespace std;

int main(){
    //Test Merchant Class 



    //Test Party Class
    Party Test = Party(45, 70, 4);
    cout << Test.getPartyFullness() << endl;
    Test.setPartyFullness(30);
    cout << Test.getPartyFullness() << endl;

    cout << Test.getGoldPieces() << endl;
    Test.setGoldPieces(50);
    cout << Test.getGoldPieces() << endl;

    cout << Test.getNumPlayers() << endl;
    Test.setNumPlayers(3);
    cout << Test.getNumPlayers() << endl;

    //Expected 
    //45
    //30
    //70
    //50
    //4
    //3

}
