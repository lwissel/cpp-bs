/*
 * =====================================================================================
 *
 *       Filename:  Grid.cpp
 *
 *          @brief  Implementation for the Grid class
 *        @version  1.0
 *           @date  18/11/2014 14:14:50
 *        Compiler  gcc
 *
 *        @author  Lennart Wissel (lw), lennart.wissel@gmx.net
 *
 * =====================================================================================
 */

#include <vector>
#include <string>
#include "Grid.hpp"
/** 
 * @brief default constructor
 *
 * This constructor creates a new Grid of size 10x10 without any ship
 */
Grid::Grid() {
  this->init();
}

/**
 * @brief constructor to create arbitrary square grids
 */
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
