#include "catch.hpp"
#include "../src/Ship.hpp"
#include "../src/Fleet.hpp"

#include <iostream>
#include <vector>

TEST_CASE("Test of Fleet class") {
   Ship s1;
   Ship s2(4,"sub",1,1,'s');
   Ship s3(19,"battleship",2,8,'n');
   Ship s4, s5;


   std::vector<Ship> ships;
   ships.push_back(s1);
   ships.push_back(s2);
  
     Fleet f1(ships);

  SECTION("Constructor tests") {
     std::cout << f1.printFleet();
     std::cout << f1.getShipsUndestroyed();
  }

  SECTION("Getters/Setters tests") {

     ships.push_back(s3);

     SECTION("SETTERS tests") {
        f1.setShips(ships);
        f1.addShip(s4);
        REQUIRE(f1.getShipsUndestroyed() == 4);
        REQUIRE(f1.getShips().at(0) == s1);
        REQUIRE(f1.getShips().at(3) == s4);
        
        //f1.delShip(s2);
        //f1.delShip(s3);

        // REQUIRE(f1.getShipsUndestroyed() == 2);
        // REQUIRE(f1.getShips().at(0) == s1);
        // REQUIRE(f1.getShips().at(1) == s4);

        f1.printFleet();
  
     }

  }


}
