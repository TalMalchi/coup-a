#include <iostream>
#include <string>
#include "Player.hpp"


namespace coup{
    class Game;


    class Duke:public Player{
        public:

        Duke(Game &game, string name_player):Player(game, name_player){}
        ~Duke(){}

        void tax();
        //can block foregin aid from another player. the player that block add the coins 
        void block (Player &target);

        string role(){
            return "Duke";
        }

    };
    
}