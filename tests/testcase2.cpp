#include "catch.hpp"
#include "square.hpp"

namespace t2 {
TEST_CASE("2 test computation of d^2") {

  SECTION("test for rational doubles") {
    REQUIRE(0. == Approx(square(0)));
    REQUIRE(1/4. == Approx(square(1/2.)));
  }

  SECTION("test for -rational doubles") {
    REQUIRE(1/4. == Approx(square(-1/2.)));
  }
}
}
