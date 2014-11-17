#include "catch.hpp"
#include "square.hpp"

namespace t1 {
TEST_CASE("test computation of d^2") {

  SECTION("test for natural doubles") {
    REQUIRE(0. == Approx(square(0)));
    REQUIRE(1. == Approx(square(1)));
    REQUIRE(4. == Approx(square(2)));
    REQUIRE(16. == Approx(square(4)));
  }

  SECTION("test for -natural doubles") {
    REQUIRE(0. == Approx(square(0)));
    REQUIRE(1. == Approx(square(-1.)));
    REQUIRE(4. == Approx(square(-2.)));
    REQUIRE(16. == Approx(square(-4.)));
  }
}
}
