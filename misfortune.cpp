  
  Misfortune(){
   remainingPlayers = 4;
  }
  void turns(){
    turn++;
    variable = rand()%10;
    if(variable<4){
      variable = rand()%10;
      if(0<variable&&variable<3){
        robbed();
      }
      else if(2<variable&&variable<6){
        armor_breaks();
      }
      else if(5<variable&&variable<9){
        food_poisoning();
      }else if(variable==9){
        locked();
      }
    }
  }
  string robbed(){
    //will print out robbed message and decrement party's items notifacation
  }
  string armor_breaks(){
    //will remove 1 armor from party and print notification
  }
  string food_poisoning(){
    //will decrement random team members fullness and print notifacation
  }
  string locked(){
    remainingPlayers--;
    //will print out player locked behind door message
  }
  
  
