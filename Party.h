#include <iostream>
using namespace std;

class Party{
    private:
        //party fullness
        int party_fullness_; 
        // gold_pieces
        int gold_pieces_;
        //num players
        int num_players_;

    public:
    Party();
    Party(int party_fullness, int gold_pieces, int num_players);
    int getPartyFullness();
    void setPartyFullness(int fullness);
    int getGoldPieces();
    void setGoldPieces(int gold);
    int getNumPlayers();
    void setNumPlayers(int players);

};
