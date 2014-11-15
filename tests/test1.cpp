/*
 * =====================================================================================
 *
 *       Filename:  test1.cpp
 *
 *    Description:  First test for catch unit tests
 *
 *        Version:  1.0
 *        Created:  15/11/2014 16:24:27
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Lennart Wissel (lw), lennart.wissel@gmx.net
 *   Organization:  UoB
 *
 *  HOWTO
 *   http://hiltmon.com/blog/2014/10/26/simple-c-plus-plus-testing-with-catch-in-xcode/
 *
 * =====================================================================================
 */

#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "square.hpp"


TEST_CASE("test computation of d^2") {
  double d;

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
