using namespace std;
merchantPrompt(Player &player, Merchant &merchant){
  int choice;
  int quantity;
  bool valid= false;
  int cpu = 0;
  int price = 0;
  
  cout<<"If you're looking to get supplies, you've come to the right place.\n
  I would be happy to part with some of my wares...for the proper price!\n

  +-------------+\n
  | INVENTORY   |\n
  +-------------+\n
  | Gold        | "<<party.getGoldPieces()<<"\n
  | Ingredients | "<<player.getIngredients()<<"kg\n
  | Cookware    | P: "<<player.getCeramicPot<<" | F:"<<player.getFryingPan()<<" | C: "<<player.getCauldron()<<"\n
  | Weapons     | C:"<<player.getClub<<" | S: "<<player.getSpear<<" | R: "<<player.getRapier<<" | B: "<<player.getBattleAxe<<" | L:"<<player.getLongSword<<"\n
  | Armor       | "<<player.getArmor<<"\n
  | Treasures   | R: "<<player.getSilverRing<<" | N: "<<player.getRubyNecklace<<" | B: "<<player.getEmeraldBracelet<<" | C: "<<play.getDiamondCirclet<<" | G: "<<player.getGemEncrustedGoblet<<"\n

  Choose one of the following:\n
   1. Ingredients: To make food, you have to cook raw ingredients.\n
   2. Cookware: You will need something to cook those ingredients.\n
   3. Weapons: It's dangerous to go alone, take this!\n
   4. Armor: If you want to survive monster attacks, you will need some armor.\n
   5. Sell treasures: If you find anything shiny, I would be happy to take it off your hands.\n
   6. Leave: Make sure you get everything you need, I'm leaving after this sale!\n
   >";
   cin>>choice;
   switch (choice){
     case 1:
       cout<<"How many kg of ingredients would you like to buy?(1 gold per kg)\n";
       cin>>quantity;
       cpu = merchant.getIngredients();
       item = "kg of ingredients";
     break;
     case 2:
       cout<<"What cookware catches your fancy?\n
         1)Ceramic Pot\n
         2)Frying Pan\n
         3)Cauldron\n";
       cin>>choice;
       cpu = merchant.getIngredients();
       item = "kg of ingredients";
     break;

   }
   price=quantity*cpu;
   cout<<"are you sure you want to by "<<quantity<<item<<" for "<<price<<" gold?(y/n)\n";
     

}
