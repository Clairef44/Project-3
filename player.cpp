  
  #include "Player.h"
  #include <iostream>

  using namespace std; 

  Player :: Player(){
    string playerName = "";
    int playerFullness = 50;
    int playerGold = 100;
    int playerCeramicPot = 0;
    int playerFryingPan = 0;
    int playerCauldron = 0;
    int playerClub = 0;
    int playerSpear = 0;
    int playerRapier = 0;
    int playerBattleAxe = 0;
    int playerLongSword = 0;
    int playerWeapons = 0;
    int playerTreasures = 0;
    int playerArmor = 0;
    int playerIngredients = 0;
    int keys = 0;
    int playerSilverRing = 0;
    int playerRubyNecklace = 0;
    int playerEmeraldBracelet = 0;
    int playerDiamondCirclet = 0;
    int playerGemEncrustedGoblet = 0;
  }

  Player :: Player(string playerName_, int playerFullness_, int playerGold_, int playerCeramicPot_, int playerFryingPan_, int playerCauldron_, int playerClub_, int playerSpear_, int playerRapier_, int playerBattleAxe_, int playerLongSword_, int playerWeapons_, int playerTreasures_, int playerArmor_, int playerIngredients_, int keys_, int playerSilverRing_, int playerRubyNecklace_, int playerEmeraldBracelet_, int playerDiamondCirclet_, int playerGemEncrustedGoblet_){
    playerName = playerName_;
    playerFullness = playerFullness_;
    playerGold = playerGold_;
    playerCeramicPot = playerCeramicPot_;
    playerFryingPan = playerFryingPan_;
    playerCauldron = playerCauldron_;
    playerClub = playerClub_;
    playerSpear = playerSpear_;
    playerRapier = playerRapier_;
    playerBattleAxe = playerBattleAxe_;
    playerLongSword = playerLongSword_;
    playerWeapons = playerWeapons_;
    playerTreasures =  playerTreasures_;
    playerArmor = playerArmor_;
    playerIngredients = playerIngredients_;
    keys = keys_;
    playerSilverRing = playerSilverRing_;
    playerRubyNecklace = playerRubyNecklace_;
    playerEmeraldBracelet = playerEmeraldBracelet_;
    playerDiamondCirclet = playerDiamondCirclet_;
    playerGemEncrustedGoblet = playerGemEncrustedGoblet_;




  }
 
  string Player :: getName(){
    return playerName;
  }

  int  Player :: getFullness(){
    return playerFullness;
  }

  int Player :: getGold(){
    return playerGold;
  }

  int Player :: getCeramicPot(){
    return playerCeramicPot;
  }

  int Player :: getFryingPan(){
    return playerFryingPan;
  }

  int Player :: getCauldron(){
    return playerCauldron;
  }

  int Player :: getClub(){
    return playerClub;
  }
  
  int Player :: getSpear(){
    return playerSpear;
  }

  int Player :: getRapier(){
    return playerRapier;
  }

  int Player :: getBattleAxe(){
    return playerBattleAxe;
  }

  int Player :: getLongSword(){
    return playerLongSword;
  }

  int Player :: getWeapons(){
    return playerWeapons;
  }

  int Player :: getTreasures(){
    return playerTreasures;
  }

  int Player :: getArmor(){
    return playerArmor;
  }

  int Player :: getIngredients(){
    return playerIngredients;
  }

  int Player :: getkeys(){
    return keys;
  }

  int Player :: getSilverRing(){
    return playerSilverRing;
  }

  int Player :: getRubyNecklace(){
    return playerRubyNecklace;
  }

  int Player :: getEmeraldBracelet(){
    return playerEmeraldBracelet;
  }

  int Player :: getDiamondCirclet(){
    return playerDiamondCirclet;
  }
  
  int Player :: getGemEncrustedGoblet(){
    return playerGemEncrustedGoblet;
  }




  string Player :: setName(string namein){
    playerName = namein;
  }

  void Player :: setFullness(int fullin){
    playerFullness = fullin;
  }

  void Player :: setGold(int goldin){
    playerGold = goldin;
  }

  void Player :: setCeramicPot(int potin){
    playerCeramicPot=potin;
  }

  void Player :: setFryingPan(int panin){
    playerFryingPan = panin;
  }

  void Player :: setCauldron(int cauldronin){
    playerCauldron=cauldronin;
  }

  void Player :: setClub(int clubin){
    playerClub = clubin;
  }

  void Player :: setSpear(int spearin){
    playerSpear = spearin;
  }

  void Player :: setRapier(int rapierin){
    playerRapier = rapierin;
  }

  void Player :: setBattleAxe(int axein){
    playerBattleAxe = axein;
  }

  void Player :: setLongSword(int swordin){
    playerLongSword = swordin;
  }

  void Player :: setWeapons(int weapons){
    playerWeapons = weapons;
  }

  void Player :: setTreasures(int treasures){
    playerTreasures = treasures;
  }

  void Player :: setArmor(int armorin){
    playerArmor = armorin;
  }

  void Player :: setIngredients(int ingredientsin){
    playerIngredients = ingredientsin;
  }

  void Player :: setkeys(int keyin){
    keys = keyin;
  }

  void Player :: setSilverRing(int silver_ringin){
    playerSilverRing=silver_ringin;
  }

  void Player :: setRubyNecklace(int ruby_necklacein){
    playerRubyNecklace=ruby_necklacein;
  }

  void Player :: setEmeraldBracelet(int emerald_braceletin){
    playerEmeraldBracelet=emerald_braceletin;
  }

  void Player :: setDiamondCirclet(int diamond_circletin){
    playerDiamondCirclet=diamond_circletin;
  }

  void Player :: setGemEncrustedGoblet(int gem_encrusted_gobletin){
    playerGemEncrustedGoblet = gem_encrusted_gobletin;
  }
