#include "Party.h"
#include <iostream>
#include <fstream>

using namespace std;

Party :: Party(){
        //starting party fullness
        int party_fullness_ = 50; 
        //starting gold_pieces
        int gold_pieces_ = 100;
        //num players
        int num_players_ = 0;
}

Party :: Party(int party_fullness, int gold_pieces, int num_players){
    party_fullness_ = party_fullness;
    gold_pieces_ = gold_pieces;
    num_players_ = num_players;

}

int Party :: getPartyFullness(){
    return party_fullness_ ;
}


void Party :: setPartyFullness(int fullness){
    party_fullness_ = fullness;
}

int Party :: getGoldPieces(){
    return gold_pieces_;
}

void Party :: setGoldPieces(int gold){
    gold_pieces_ = gold;
}

int Party :: getNumPlayers(){
    return num_players_;
}

void Party :: setNumPlayers(int players){
    num_players_ = players;
}
