#include <iostream>
#include <string>
#include "Player.hpp"
using namespace std;


namespace coup{
    class Game;


    class Captain: public Player{


        public:
           
            Captain(Game &game_name, string name_player):Player(game_name, name_player){

            }
            //void coup(Player &b);

            
            //can block stealing coins from another player
            void block(Player &b);
            void steal(Player &target);
            string role(){
                return "Captain";
        }
           
    };
        
  
    
}