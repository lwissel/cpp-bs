#include "catch.hpp"
#include "../src/Ship.hpp"
#include "../src/Fleet.hpp"
#include "../src/Player.hpp"

#include <iostream>
#include <vector>

TEST_CASE("Test of Player class") {
  Ship s1;
  Ship s2(4,"sub",1,1,'s');
  Ship s3(19,"battleship",2,8,'n');
  Ship s4, s5;


  std::vector<Ship> ships;
  ships.push_back(s1);
  ships.push_back(s2);
  
  Fleet f1(ships);

  Grid g1, g2;

  Player p1("Uwe",g1,g2,f1);

  SECTION("Constructor tests") {
     REQUIRE(p1.getName() == "Uwe");
  }

  SECTION("Getters/Setters tests") {
     
     SECTION("SETTERS tests") {
        p1.setName("Holger");
        REQUIRE(p1.getName() == "Holger");

        ships.push_back(s3);
        Fleet f2(ships);

        p1.setFleet(f2);

        REQUIRE(p1.getOpponentGrid().getSize() == p1.getOwnGrid().getSize());
     }
  }

}
