#include "Merchant.h"
#include "Party.h"
#include <iostream>

using namespace std;

int main(){
    //Test Merchant Class 
    Merchant merchant = Merchant(50, 0, 60, 4, 5, 6, 2, 1, 0, 3, 2, 5, 2, 3, 1, 5, 4, 2) ;
        //Test the Get functions
        cout << merchant.getFullness() << endl;
        cout << merchant.getNumRoomsCleared() << endl;
        cout << merchant.getGold() << endl;
        cout << merchant.getIngredients() << endl;
        cout << merchant.getCeramicPot() << endl;
        cout << merchant.getFryingPan() << endl;
        cout << merchant.getCauldron() << endl;
        cout << merchant.getClub() << endl;
        cout << merchant.getSpear() << endl;
        cout << merchant.getRapier() << endl;
        cout << merchant.getBattleAxe() << endl;
        cout << merchant.getLongsword() << endl;
        cout << merchant.getArmor() << endl;
        cout << merchant.getSilverRing() << endl;
        cout << merchant.getRubyNecklace() << endl;
        cout << merchant.getEmeraldBracelet() << endl;
        cout << merchant.getDiamondCirclet() << endl;
        cout << merchant.getGemEncrustedGoblet() << endl;

        //Expect
        //50
        //0
        //60
        //4
        //5
        //6
        //2
        //1
        //0
        //3
        //2
        //5
        //3
        //1
        //5
        //4
        //2

        //test the set functions 
        merchant.setFullness(30);
        cout << merchant.getFullness() << endl;

        merchant.setNumRoomsCleared(2);
        cout << merchant.getNumRoomsCleared() << endl;
       

        merchant.setGold(70);
        cout << merchant.getGold() << endl;

        merchant.setIngredients(6);
        cout << merchant.getIngredients() << endl;

        merchant.setCeramicPot(8);
        cout << merchant.getCeramicPot() << endl;

        merchant.setFryingPan(10);
        cout << merchant.getFryingPan() << endl;

        merchant.setCauldron(12);
        cout << merchant.getCauldron() << endl;

        merchant.setClub(15);
        cout << merchant.getClub() << endl;

        merchant.setSpear(6);
        cout << merchant.getSpear() << endl;

        merchant.setRapier(4);
        cout << merchant.getRapier() << endl;

        merchant.setBattleAxe(5);
        cout << merchant.getBattleAxe() << endl;

        merchant.setLongsword(8);
        cout << merchant.getLongsword() << endl;

        merchant.setArmor(10);
        cout << merchant.getArmor() << endl;

        merchant.setSilverRing(4);
        cout << merchant.getSilverRing() << endl;

        merchant.setRubyNecklace(2);
        cout << merchant.getRubyNecklace() << endl;

        merchant.setEmeraldBracelet(6);
        cout << merchant.getEmeraldBracelet() << endl;

        merchant.setDiamondCirclet(5);
        cout << merchant.getDiamondCirclet() << endl;

        merchant.setGemEncrustedGoblet(3);
        cout << merchant.getGemEncrustedGoblet() << endl;

        //Expected 
        //30
        //2
        //70
        //6
        //8
        //10
        //12
        //15
        //6
        //4
        //5
        //8
        //10
        //4
        //2
        //6
        //5
        //3


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
