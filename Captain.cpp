
#include <iostream>
using namespace std;
#include <string>
#include "Player.hpp"
#include "Captain.hpp"
using namespace coup;

void Captain::block(Player &b)
{
    if (!is_block)
    {
        is_block = true;
    }
}

void Captain::steal(Player &target)
{
  
}