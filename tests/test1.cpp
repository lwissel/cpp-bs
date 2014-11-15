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
 * =====================================================================================
 */

#define CATCH_CONFIG_MAIN
#include "catch.hpp"

double square(double d) {
  return d*d;
}
