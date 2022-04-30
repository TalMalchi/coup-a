#include "doctest.h"
#include <iostream>
using namespace std;
#include <vector>
#include <string>
#include "Player.hpp"
#include "Duke.hpp"
#include "Assassin.hpp"
#include "Ambassador.hpp"
#include "Captain.hpp"
#include "Contessa.hpp"
#include "Game.hpp"
using namespace coup;


TEST_CASE("Constructors"){
    
    CHECK_NOTHROW(Game test1{});
    CHECK_NOTHROW(Game test2{});
    CHECK_NOTHROW(Game test3{});

  
}


TEST_CASE("Init Players"){

    Game game_test{};
    Captain captain{game_test, "Raz"};
    Assassin assassin{game_test, "Yuval"};
    Duke duke{game_test,"Gal"};
    Contessa contessa{game_test,"Tal"};
    Ambassador ambassador{game_test, "Neta"};
    Captain captain1{game_test, "Amit"};
    Captain captain2{game_test, "Or"};
    Ambassador ambassador1{game_test, "Ori"};
    vector<string> player_test=game_test.players();

    CHECK(player_test.size()==8);
    CHECK(player_test[0]=="Raz");
    CHECK(player_test[1]=="Yuval");
    CHECK(player_test[2]=="Gal");
    CHECK(player_test[3]=="Tal");
    CHECK(player_test[4]=="Neta");


    captain.income();
    CHECK(captain.coins()==1);
    CHECK(captain.role()=="Captain");
    CHECK(contessa.role()=="Contessa");
    CHECK(captain.name_player=="Raz");
    CHECK(game_test.turn() =="Yuval");
};


TEST_CASE("Players Functions"){

    Game game_test1{};
    Captain captain{game_test1, "Raz"};
    Assassin assassin{game_test1, "Yuval"};
    Duke duke{game_test1,"Gal"};
    Contessa contessa{game_test1,"Tal"};
    Ambassador ambassador{game_test1, "Neta"};
    Captain captain1{game_test1, "Amit"};
    
    //check income foreign_aid
    captain.income();
    CHECK(captain.coins()==1);
    assassin.foreign_aid();
    CHECK_EQ(assassin.coins(),2);
    CHECK_NE(duke.coins(),1);
    assassin.foreign_aid();
    CHECK_EQ(assassin.coins(),4);
    duke.income();
    CHECK(duke.coins()==1);
    captain.foreign_aid();
    captain.foreign_aid();
    captain.foreign_aid();
    CHECK(captain.coins()==7);
    contessa.foreign_aid();
    CHECK_EQ(contessa.coins(),2);


    //check role
    CHECK_EQ(contessa.role(), "Contessa");
    CHECK_EQ(ambassador.role(), "Ambassador");
    CHECK_NE(captain1.role(), "Contessa");
    
    //duke functions
    duke.tax();
    CHECK(duke.coins()==4);
    duke.block(assassin);
    CHECK_EQ(assassin.coins(),2);

    //assassin functions
    assassin.income();
    assassin.coup(contessa);
    CHECK_EQ(assassin.coins(),0);

    //ambassador finctions
    ambassador.transfer(duke,assassin);
    CHECK(duke.coins()==3);
    CHECK_EQ(assassin.coins(),1);

    //captain finctions
    captain.coup(duke);
    CHECK(captain.coins()==0);
    contessa.foreign_aid();
    CHECK_EQ(contessa.coins(),4);
    captain.steal(contessa);
    CHECK_EQ(contessa.coins(),2);
    CHECK_EQ(captain.coins(),2);
    


};

TEST_CASE("Game Functions"){

    Game game_test{};
    Captain A{game_test, "Raz"};
    Assassin B{game_test, "Yuval"};
    Duke C{game_test,"Gal"};
    Contessa D{game_test,"Tal"};
    Ambassador E{game_test, "Neta"};
   
    vector<string> player_test=game_test.players();

  
    CHECK_NOTHROW(A.income());
    CHECK_NOTHROW(B.income());
    CHECK_NOTHROW(C.income());
    CHECK_NOTHROW(D.income());
    //CHECK_THROWS(A.income());

    

}