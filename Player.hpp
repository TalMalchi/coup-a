#pragma once
#include <iostream>
#include <string>
#include "Game.hpp"
using namespace std;


namespace coup{
class Game;

class Player{

    // protected:
    //     int my_coins;
    //     string name_player;
    //     string my_role;

    public:
        int my_coins;
        string name_player;
        string my_role;
        bool is_block= false;
        coup::Game& game;
        
        Player(Game &new_game, string name):game(new_game), name_player(name){
            new_game.add_NewPlayer(name);
            my_coins=0;
        } 
        ~Player(){}
    

    void income();
    void foreign_aid();
    virtual void coup(Player &b);
    int coins();
    virtual string role(); //returns the role of the player
         
    
};
    
}