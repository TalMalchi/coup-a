#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;
#pragma once





namespace coup{
    
    class Game{

        // protected:
        //     vector<Player> player_list;
        //     string name_game;
            //string last_player;
        
        
        public:
            //vector<Player> player_list;
            vector<string> player_list;
            string name_game;
            Game(){}
            ~Game(){}
            string turn();
                
            friend ostream& operator<<(ostream& out, const Game& game);
                
                 
            void add_NewPlayer(string name); //add new player to the list players
                 
            
            vector<string> players(); //reutn list of player's names
            

            void winner(); //print the winner of the game  

            void switch_player(string name); 
            void player_out(string name);      
        
    };
    
}
