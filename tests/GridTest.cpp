#include "catch.hpp"
#include "../src/Grid.hpp"

#include <iostream>

TEST_CASE("Test of Grid class") {

  Grid testgrid(3), test2, test3(5), test4(15);
  
  SECTION("Constructor tests") {
     std::cout << testgrid.printGrid();
     std::cout << test2.printGrid();
     std::cout << test3.printGrid();
  }

  SECTION("Getters/Setters tests") {
     REQUIRE(testgrid.getSize() == 3);
     REQUIRE(test2.getSize() == 10);
     REQUIRE(test3.getSize() == 5);

     SECTION("SETTERS tests") {
        test2.setValue(10,10,Grid::FOG);
        REQUIRE(test2.getValue(10,10) == 0);

        test2.setValue(0,0,Grid::MIS);
        REQUIRE(test2.getValue(0,0) == 4);

        test2.setValue(8,4,Grid::SUNKEN);
        REQUIRE(test2.getValue(8,4) == Grid::SUNKEN);
     }
     test2.setValue(8,3,Grid::SUNKEN);
     test2.setValue(8,5,Grid::SUNKEN);
     std::cout << test2.printGrid();
  }
  SECTION("BIG SIZED GRID") {
     std::cout << test4.printGrid(); // non aligned coordinates
  }

}
