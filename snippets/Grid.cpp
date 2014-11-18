/*
 * =====================================================================================
 *
 *       Filename:  Grid.cpp
 *
 *    Description:  Grid class representing an abstract 2D int
 *                  array[row][column] whose entries may take one of the
 *                  following values
 *
 *                  0 = FOW = FogOfWar, initial value
 *                  1 = SHIP (of Player x)
 *                  2 = HIT = damaged ship
 *                  3 = SUNKEN
 *                  4 = NWA = not well aimed = mishit
 *
 *        Version:  1.0
 *        Created:  18/11/2014 14:14:46
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Lennart Wissel (lw), lennart.wissel@gmx.net
 *   Organization:  UoB
 *
 * =====================================================================================
 */
#include <iostream>
#include <vector>
#include "Grid.hpp"

// Constructor
Grid::Grid(int rows, int columns) {
  this->rows = rows;
  this->columns = columns;
  this->grid.resize(columns, std::vector<int>(rows));
  this->grid.assign(columns, std::vector<int>(rows,this->FOW));
}

void Grid::printGrid() {
  for ( std::vector<std::vector<int> >::size_type i = 0; i < grid.size(); i++ ) {
     for ( std::vector<int>::size_type j = 0; j < grid[i].size(); j++ ) {
        std::cout << grid[i][j] << ' ';
     }
     std::cout << std::endl;
  }
}
