#include <iostream>
#include <string>
#include <vector>
#include "Player.hpp"

using namespace std;


namespace coup{
    class Game;

    class Assassin: public Player{

        // private:
        //     void coup(Player &b)override final;

        public:
         Assassin(Game &game, string name_player):Player(game, name_player){}
        ~Assassin(){}
        void coup(Player &b);
        string role(){
            return "Assassin";
        }

    };
    
}