#include <iostream>
using namespace std;

class Merchant{
    private:
        // inital merchant fullness 
        int fullness_;

        // track the number of rooms cleared 
        int num_rooms_cleared_;

        // Inventory 
        int gold_; 
        int ingredients_= 1+num_rooms_cleared*.25;

        //Cookware 
        int ceramic_pot_= 5+num_rooms_cleared*.25*5;
        int frying_pan_= 10+num_rooms_cleared*.25*10;
        int cauldron_= 20+num_rooms_cleared*.25*20;

        //Weapons 
        int club_= 2+num_rooms_cleared*.25*2;
        int spear_= 2+num_rooms_cleared*.25*2;
        int rapier_= 5+num_rooms_cleared*.25*5;
        int battle_axe_= 15+num_rooms_cleared*.25*15;
        int longsword_= 50+num_rooms_cleared*.25*50;

        int armor_= 5+num_rooms_cleared*.25*5;
    
        //Treasures 
        int silver_ring_= 10;
        int ruby_necklace_= 20;
        int emerald_bracelet_= 30;
        int diamond_circlet_= 40;
        int gem_encrusted_goblet_= 50;




    public:
        //
        Merchant();
        Merchant(int fullness, int num_rooms_cleared, int gold, int ingredients, int ceramic_pot, int frying_pan, int cauldron, int club, int spear, int rapier, int battle_axe, int longsword, int armor, int silver_ring, int ruby_necklace, int emerald_bracelet,  int diamond_circlet, int gem_encrusted_goblet);
        //  get functions
        int getFullness();
        int getNumRoomsCleared();
        int getGold();
        int getIngredients();
        int getCeramicPot();
        int getFryingPan();
        int getCauldron();
        int getClub();
        int getSpear();
        int getRapier();
        int getBattleAxe();
        int getLongsword();
        int getArmor();
        int getSilverRing();
        int getRubyNecklace();
        int getEmeraldBracelet();
        int getDiamondCirclet();
        int getGemEncrustedGoblet();

        //  set functions
        void setFullness(int fullness_amount);
        void setNumRoomsCleared(int num_rooms);
        void setGold(int gold_amount);
        void setIngredients(int num_ingredients);
        void setCeramicPot(int pot);
        void setFryingPan(int pan);
        void setCauldron(int num_cauldron);
        void setClub(int clubs);
        void setSpear(int spears);
        void setRapier(int rapiers);
        void setBattleAxe(int axe);
        void setLongsword(int sword);
        void setArmor(int num_armor);
        void setSilverRing(int ring);
        void setRubyNecklace(int necklace);
        void setEmeraldBracelet(int bracelet);
        void setDiamondCirclet(int circlet);
        void setGemEncrustedGoblet(int gem_goblet);


};
