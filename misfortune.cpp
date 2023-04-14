  #include <iostream>
  #include "Misfortune.h"

  using namespace std;


  Misfortune :: Misfortune(){
   remainingPlayers = 4;
  }

  Misfortune :: Misfortune(int remainingPlayers_, int turn_){
    remainingPlayers = remainingPlayers_;
    turn = turn_;
  }

  int Misfortune :: getRemainingPlayers(){
    return remainingPlayers;
  }

  int Misfortune :: getTurn(){
    return turn;
  }

  void Misfortune :: setRemainingPlayers(int players){
    remainingPlayers = players;
  }

  void Misfortune :: setTurn(int turns){
    turn = turns; 
  }

  void Misfortune :: turns(){
    turn++;
    double variable = rand()%10;
    if(variable < 4){
      variable = rand()%10;
      if(0 < variable && variable < 3){
        robbed();
      }
      else if(2 < variable && variable < 6){
        armor_breaks();
      }
      else if(5 < variable && variable < 9){
        food_poisoning();
      }else if(variable == 9){
        locked();
      }
    }
  }


  string Misfortune :: robbed(){
    //will print out robbed message and decrement party's items notifacation
  }


  string Misfortune :: armor_breaks(){
    //will remove 1 armor from party and print notification
  }


  string Misfortune :: food_poisoning(){
    //will decrement random team members fullness and print notifacation
  }

  
  string Misfortune :: locked(){
    remainingPlayers--;
    //will print out player locked behind door message
  }
  
  
