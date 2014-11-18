#include "catch.hpp"
#include "square.hpp"

TEST_CASE("2 test computation of d^2") {

  SECTION("test for rational doubles") {
    REQUIRE(true);
    REQUIRE(square(0.0) == 0.0);
  }
}
