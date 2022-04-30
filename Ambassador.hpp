#include <iostream>
#include <string>
#include "Player.hpp"



namespace coup{
    class Game;


    class Ambassador: public Player{

        public:
            Ambassador(Game &game, string name_player):Player(game, name_player){
                

            }
            //void coup(Player &b);

            void transfer(Player &source, Player &dest); //transfer coins from one player to another
    
            void block(Player &b);  //can block stealing coins from another player

            string role(){
            return "Ambassador";
            }
        
            
    
};
}