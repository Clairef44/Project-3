#include "Merchant.h"
#include <iostream>
#include <fstream>

using namespace std;

Merchant :: Merchant(){
       // inital merchant fullness 
        fullness_ = 50;

        // track the number of rooms cleared 
        num_rooms_cleared_ = 0;

        // Inventory 
        gold_ = 0; 
        ingredients_ = 0;

        //Cookware 
        ceramic_pot_ = 0;
        frying_pan_ = 0;
        cauldron_ = 0;

        //Weapons 
        club_ = 0;
        spear_ = 0;
        rapier_ = 0;
        battle_axe_ = 0;
        longsword_ = 0;

        armor_ = 0;
    
        //Treasures 
        silver_ring_ = 0;
        ruby_necklace_ = 0;
        emerald_bracelet_ = 0;
        diamond_circlet_ = 0;
        gem_encrusted_goblet_ = 0;

}


Merchant :: Merchant(int fullness, int num_rooms_cleared, int gold, int ingredients, int ceramic_pot, int frying_pan, int cauldron, int club, int spear, int rapier, int battle_axe, int longsword, int armor, int silver_ring, int ruby_necklace, int emerald_bracelet,  int diamond_circlet, int gem_encrusted_goblet){
    // inital merchant fullness 
        fullness_ =  fullness;

        // track the number of rooms cleared 
        num_rooms_cleared_ = num_rooms_cleared;

        // Inventory 
        gold_ = gold; 
        ingredients_ = ingredients;

        //Cookware 
        ceramic_pot_ = ceramic_pot;
        frying_pan_ = frying_pan;
        cauldron_ = cauldron;

        //Weapons 
        club_ = club;
        spear_ = spear;
        rapier_ = rapier;
        battle_axe_ = battle_axe;
        longsword_ = longsword;

        armor_ = armor;
    
        //Treasures 
        silver_ring_ = silver_ring;
        ruby_necklace_ = ruby_necklace;
        emerald_bracelet_ = emerald_bracelet;
        diamond_circlet_ = diamond_circlet;
        gem_encrusted_goblet_ = gem_encrusted_goblet;
}


int Merchant :: getFullness(){
    return fullness_;
}


int Merchant :: getNumRoomsCleared(){
    return num_rooms_cleared_;
}


int Merchant :: getGold(){
    return gold_;
}


int Merchant :: getIngredients(){
    return ingredients_;
}


int Merchant :: getCeramicPot(){
    return ceramic_pot_;
}


int Merchant :: getFryingPan(){
    return frying_pan_;
}


int Merchant :: getCauldron(){
    return cauldron_;
}


int Merchant :: getClub(){
    return club_;
}


int Merchant :: getSpear(){
    return spear_;
}


int Merchant :: getRapier(){
    return rapier_;
}


int Merchant :: getBattleAxe(){
    return battle_axe_;
}


int Merchant :: getLongsword(){
    return longsword_;
}


int Merchant :: getArmor(){
    return armor_;
}


int Merchant :: getSilverRing(){
    return silver_ring_;
}


int Merchant :: getRubyNecklace(){
    return ruby_necklace_;
}


int Merchant :: getEmeraldBracelet(){
    return emerald_bracelet_;
}


int Merchant :: getDiamondCirclet(){
    return diamond_circlet_;
}


int Merchant :: getGemEncrustedGoblet(){
    return gem_encrusted_goblet_;
}




void Merchant :: setFullness(int fullness_amount){
    fullness_ = fullness_amount;
}

void Merchant :: setNumRoomsCleared(int num_rooms){
    num_rooms_cleared_ = num_rooms;

    /*
        increase the price by 25% of the original prices for each room cleared 
    */
}


void Merchant :: setGold(int gold_amount){
    gold_ = gold_amount;

}

void Merchant :: setIngredients(int num_ingredients){
    ingredients_ = num_ingredients;

    //add 1 to gold for every kilogram of food 
    gold_++;
}

void Merchant :: setCeramicPot(int pot){
    ceramic_pot_ = pot;

    //add 5 to gold for every ceramic pot purchased
    gold_ += 5;
}

void Merchant :: setFryingPan(int pan){
    frying_pan_ = pan;

    //add 10 to gold for every frying pan purchased
    gold_ += 10;
}

void Merchant :: setCauldron(int num_cauldron){
    cauldron_ = num_cauldron;

    //add 20 to gold for every cauldron purchased
    gold_ += 20;
}

void Merchant :: setClub(int clubs){
    club_ = clubs;

    //add 2 to gold for every club purchased
    gold_ += 2;

}

void Merchant :: setSpear(int spears){
    spear_ = spears;

    //add 2 to gold for every spear purchased
    gold_ += 2;
}

void Merchant :: setRapier(int rapiers){
    rapier_ = rapiers;

    //add 5 to gold for every rapier purchased
    gold_ += 5;
}

void Merchant :: setBattleAxe(int axe){
    battle_axe_ = axe;

    //add 15 to gold for every battle axe purchased
    gold_ += 15;
}

void Merchant :: setLongsword(int sword){
    longsword_ = sword;

    //add 50 to gold for every longsword purchased
    gold_ += 50;
}

void Merchant :: setArmor(int num_armor){
    armor_ = num_armor;

    //add 5 to gold for every armor purchased
    gold_ += 5;
}

void Merchant :: setSilverRing(int ring){
    silver_ring_ = ring;

    //add 10 to gold for every silver ring purchased
    gold_ += 10;
}

void Merchant :: setRubyNecklace(int necklace){
    ruby_necklace_ = necklace;

    //add 20 to gold for every ruby necklace purchased
    gold_ += 20;
}

void Merchant :: setEmeraldBracelet(int bracelet){
    emerald_bracelet_ = bracelet;

    //add 30 to gold for every emerald bracelet purchased
    gold_ += 30;
}

void Merchant :: setDiamondCirclet(int circlet){
    diamond_circlet_ = circlet;

    //add 40 to gold for every diamond circlet purchased
    gold_ += 40;
}

void Merchant :: setGemEncrustedGoblet(int gem_goblet){
    gem_encrusted_goblet_ = gem_goblet;

    //add 50 to gold for every gem-encrusted goblet purchased
    gold_ += 50;
}



