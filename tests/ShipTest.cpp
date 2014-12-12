#include "catch.hpp"
#include "../src/Ship.hpp"

#include <iostream>

TEST_CASE("Test of Ship class") {
   Ship s1;
   Ship s2(4,"sub",1,1,'s');
   Ship s3(19,"battleship",2,8,'n');
   Ship s4, s5;

   std::cout << s1.printShip() << std::endl;
   std::cout << s2.printShip() << std::endl;
   std::cout << s3.printShip() << std::endl;
  
  SECTION("Constructor tests") {
     REQUIRE(s1.getSize() == 0);
     REQUIRE(s1.getType() == "ship");
     REQUIRE(s1.getXpos() == 0);
     REQUIRE(s1.getYpos() == 0);
     REQUIRE(s1.getOrientation() == 's');
  }

  SECTION("Getters/Setters tests") {

     SECTION("SETTERS tests") {
        s2.setSize(5);
        REQUIRE(s2.getSize() == 5);

        s1.setType("destroyer");
        REQUIRE(s1.getType() == "destroyer");

        s2.setXpos(5);
        s2.setYpos(4);
        REQUIRE(s2.getXpos() == 5);
        REQUIRE(s2.getYpos() == 4);

        s1.setOrientation('m'); // is allowed should be handled by control class
        REQUIRE(s1.getOrientation() == 'm');
     }

   SECTION("TEST FOR ==") {
      REQUIRE(s1 != s2);
      REQUIRE(s1 != s3);
      REQUIRE(s2 != s3);
      REQUIRE(s4 == s5);
   }
   std::cout << s1.printShip() << std::endl;
   std::cout << s2.printShip() << std::endl;
   std::cout << s3.printShip() << std::endl;
  }


}
