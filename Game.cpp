#include <iostream>
using namespace std;
#include <string>
#include <vector>
#include "Game.hpp"
using namespace coup;

string Game::turn()
{
    string ans = " ";
    return ans;
}

void Game::add_NewPlayer(string name){ // add new player to the list players
    player_list.push_back(name);
}

ostream &operator<<(ostream &out, const Game &game){
    return out;
}

vector<string> Game::players(){ // reutn list of player's names
    return player_list;
}

void Game::winner(){ // print the winner of the game

}

void Game::switch_player(string name){

}
