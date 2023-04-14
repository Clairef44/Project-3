#include "Merchant.h"
#include "Party.h"
#include "Misfortune.h"
#include "Player.h"
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


    //Test Misfortune Class 
    Misfortune misfortune = Misfortune(3, 4);
    cout << misfortune.getRemainingPlayers() << endl;
    misfortune.setRemainingPlayers(2);
    cout << misfortune.getRemainingPlayers() << endl;

    cout << misfortune.getTurn() << endl;
    misfortune.setTurn(2);
    cout << misfortune.getTurn() << endl;

    //Expected
    //3
    //2
    //4
    //2

    //Test Player Class 
    //test get functions
    Player player = Player("Bob", 40, 10, 4, 3, 2, 1, 3, 4, 5, 1, 4, 3, 3, 15, 3, 2, 4, 3, 0, 1){
    cout << player.getName() << endl;
    cout << player.getFullness() << endl;
    cout << player.getGold() << endl;
    cout << player.getCeramicPot() << endl;
    cout << player.getFryingPan() << endl;
    cout << player.getCauldron() << endl;
    cout << player.getClub() << endl;
    cout << player.getSpear() << endl; 
    cout << player.getRapier() << endl;
    cout << player.getBattleAxe() << endl;
    cout << player.getLongSword() << endl;
    cout << player.getWeapons() << endl;
    cout << player.getTreasures() << endl;
    cout << player.getArmor() << endl;
    cout << player.getIngredients()  << endl;
    cout << player.getkeys() << endl;
    cout << player.getSilverRing() << endl;
    cout << player.getRubyNecklace() << endl;
    cout << player.getEmeraldBracelet()  << endl;
    cout << player.getDiamondCirclet()  << endl;
    cout << player.getGemEncrustedGoblet()  << endl;
 

    //Expected
    //Bob
    //40
    //10
    //4
    //3
    //2
    //1
    //3
    //4
    //5
    //1
    //4
    //3
    //3
    //15
    //3
    //2
    //4
    //3
    //0
    //1

    player.setName("Billy");
    cout << player.getName() << endl;

    player.setFullness(40);
    cout << player.getFullness() << endl;

    player.setGold(4);
    cout << player.getGold() << endl;

    player.setCeramicPot(2);
    cout << player.getCeramicPot() << endl;

    player.setFryingPan(3);
    cout << player.getFryingPan() << endl;

    player.setCauldron(6);
    cout << player.getCauldron() << endl;

    player.setClub(4);
    cout << player.getClub() << endl;

    player.setSpear(2);
    cout << player.getSpear() << endl; 

    player.setRapier(3);
    cout << player.getRapier() << endl;

    player.setBattleAxe(2);
    cout << player.getBattleAxe() << endl;

    player.setLongSword(4);
    cout << player.getLongSword() << endl;

    player.setWeapons(7);
    cout << player.getWeapons() << endl;

    player.setTreasures(10);
    cout << player.getTreasures() << endl;

    player.setArmor(2);
    cout << player.getArmor() << endl;

    player.setIngredients(4);
    cout << player.getIngredients()  << endl;

    player.setkeys(9);
    cout << player.getkeys() << endl;

    player.setSilverRing(3);
    cout << player.getSilverRing() << endl;

    player.setRubyNecklace(4);
    cout << player.getRubyNecklace() << endl;

    player.setEmeraldBracelet(6);
    cout << player.getEmeraldBracelet()  << endl;

    player.setDiamondCirclet(3);
    cout << player.getDiamondCirclet()  << endl;

    player.setGemEncrustedGoblet(1);
    cout << player.getGemEncrustedGoblet()  << endl;

    //Expected
    //Billy
    //40
    //4
    //2
    //3
    //6
    //4
    //2
    //3
    //2
    //4
    //7
    //10
    //2
    //4
    //9
    //3
    //4
    //6
    //3
    //1


}
