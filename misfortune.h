#include <iostream>
using namespace std;

class Misfortune{
  
  private:
  int remainingPlayers;
  int turn;
  
  public:
  
  Misfortune();
  Misfortune(int remainingPlayers_, int turn_);
  void turns();
  string robbed();
  string armor_breaks();
  string food_poisoning();
  string locked();
  int getRemainingPlayers();
  int getTurn();
  void setRemainingPlayers(int players);
  void setTurn(int turns);
  
  

};
