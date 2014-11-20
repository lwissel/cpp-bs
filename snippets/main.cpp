/*
 * =====================================================================================
 *
 *       Filename:  main.cpp
 *
 *    Description:  Test main
 *
 *        Version:  1.0
 *        Created:  18/11/2014 16:15:20
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Lennart Wissel (lw), lennart.wissel@gmx.net
 *   Organization:  UoB
 *
 * =====================================================================================
 */

#include "Grid.hpp"
#include <iostream>

int main() {
  Grid testgrid(3), test2, test3(5);
  std::cout << testgrid.printGrid();
  std::cout << test2.printGrid();
  std::cout << test3.printGrid();
}
