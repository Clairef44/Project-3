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
        int ingredients_;

        //Cookware 
        int ceramic_pot_;
        int frying_pan_;
        int cauldron_;

        //Weapons 
        int club_;
        int spear_;
        int rapier_;
        int battle_axe_;
        int longsword_;

        int amrmor_;
    
        //Treasures 
        int silver_ring_;
        int ruby_necklace_;
        int emerald_bracelet_;
        int diamond_circlet_;
        int gem_encrusted_goblet_;

    public:
        //
        Merchant();
        Merchant(int fullness, int num_rooms_cleared, int gold, int ingredients, int ceramic_pot, int frying_pan, int cauldron, int club, int spear, int rapier, int battle_axe, int longsword, int amrmor, int silver_ring, int ruby_necklace, int emerald_bracelet,  int diamond_circlet, int gem_encrusted_goblet);
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
        void setFullness(int fullness);
        void setNumRoomsCleared(int num_rooms_cleared);
        void setGold(int gold);
        void setIngredients(int ingredients);
        void setCeramicPot(int ceramic_pot);
        void setFryingPan(int frying_pan);
        void setCauldron(int cauldron);
        void setClub(int club);
        void setSpear(int spear);
        void setRapier(int rapier);
        void setBattleAxe(int battle_axe);
        void setLongsword(int longsword);
        void setArmor(int amrmor);
        void setSilverRing(int silver_ring);
        void setRubyNecklace(int ruby_necklace);
        void setEmeraldBracelet(int emerald_bracelet);
        void setDiamondCirclet(int diamond_circlet);
        void setGemEncrustedGoblet(int gem_encrusted_goblet);

};
