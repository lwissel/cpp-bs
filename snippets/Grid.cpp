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
#include <vector>
#include <string>
#include "Grid.hpp"

// Constructor
Grid::Grid() {
  this->init();
}

Grid::Grid(int size) {
  this->init(size);
}

// private methods
void Grid::init() {
    this->init(this->defaultGridSize);
}

void Grid::init(int size) {
    this->size = size;
    this->grid.resize(size, std::vector<int>(size));
    this->grid.assign(size, std::vector<int>(size,this->FogOfWar));
}

// public methods
int Grid::getSize() {
    return this->size;
}

std::string Grid::printGrid() {
  std::string res = "";
  for ( std::vector<std::vector<int> >::size_type i = 0; i < grid.size(); i++ ) {
     for ( std::vector<int>::size_type j = 0; j < grid[i].size(); j++ ) {
        res += grid[i][j] + " ";
     }
     res += "\n";
  }
  return res;
}
