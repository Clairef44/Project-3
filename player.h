#include <iostream>
using namespace std;

class Player{

  private:
  
  string playerName;
  int playerFullness;
  int playerGold;
  int playerCeramicPot;
  int playerFryingPan;
  int playerCauldron;
  int playerClub;
  int playerSpear;
  int playerRapier;
  int playerBattleAxe;
  int playerLongSword;
  int playerWeapons;
  int playerTreasures;
  int playerArmor;
  int playerIngredients;
  int keys;
  int playerSilverRing;
  int playerRubyNecklace;
  int playerEmeraldBracelet;
  int playerDiamondCirclet;
  int playerGemEncrustedGoblet;
  
  public:
  Player();
  Player(string playerName_, int playerFullness_, int playerGold_, int playerCeramicPot_, int playerFryingPan_, int playerCauldron_, int playerClub_, int playerSpear_, int playerRapier_, int playerBattleAxe_, int playerLongSword_, int playerWeapons_, int playerTreasures_, int playerArmor_, int playerIngredients_, int keys_, int playerSilverRing_, int playerRubyNecklace_, int playerEmeraldBracelet_, int playerDiamondCirclet_, int playerGemEncrustedGoblet_);
  string getName();
  int getFullness();
  int getGold();
  int getCeramicPot();
  int getFryingPan();
  int getCauldron();
  int getClub();
  int getSpear();
  int getRapier();
  int getBattleAxe();
  int getLongSword();
  int getWeapons();
  int getTreasures();
  int getArmor();
  int getIngredients();
  int getkeys();
  int getSilverRing();
  int getRubyNecklace();
  int getEmeraldBracelet();
  int getDiamondCirclet();
  int getGemEncrustedGoblet();
  
  string setName(string namein);
  void setFullness(int fullin);
  void setGold(int goldin);
  void setCeramicPot(int potin);
  void setFryingPan(int panin);
  void setCauldron(int cauldronin);
  void setClub(int clubin);
  void setSpear(int spearin);
  void setRapier(int rapierin);
  void setBattleAxe(int axein);
  void setLongSword(int swordin);
  void setWeapons(int weapons);
  void setTreasures(int treasures);
  void setArmor(int armorin);
  void setIngredients(int ingredientsin);
  void setkeys(int keyin);
  void setSilverRing(int silver_ring);
  void setRubyNecklace(int ruby_necklace);
  void setEmeraldBracelet(int emerald_bracelet);
  void setDiamondCirclet(int diamond_circlet);
  void setGemEncrustedGoblet(int gem_encrusted_goblet);
  
  
  
};
