/*
 ***************************************************************************************
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
 ***************************************************************************************
 */

#include <vector>
#include <string>
#include "Grid.hpp"

/*-----------------------------------------------------------------------------
 *  constructors
 *-----------------------------------------------------------------------------*/

/// @brief default constructor
/// 
/// This constructor creates a new Grid of size 10x10 without any ship
Grid::Grid() {
  this->init();
}

///
/// @brief constructor to create arbitrary square grids
/// @param size represents the size of the grid
///
Grid::Grid(int size) {
  this->init(size);
}


/*-----------------------------------------------------------------------------
 *  private methods
 *-----------------------------------------------------------------------------*/

/// @brief initializes a grid with default grid size
void Grid::init() {
    this->init(this->defaultGridSize);
}

/// @brief initializes a grid with arbitrary size
/// @param size represents the size of the grid
void Grid::init(int size) {
    this->size = size;
    this->grid.resize(size, std::vector<int>(size));
    this->grid.assign(size, std::vector<int>(size,this->FogOfWar));
}



/*-----------------------------------------------------------------------------
 *  public methods
 *-----------------------------------------------------------------------------*/
int Grid::getSize() {
    return this->size;
}

/// @brief prints the grid in raw form
/// @return string representation of the grid with number representing the
/// field state. Will create Column A...J.. and Row 1 ... 10.. depending on the
/// size of the grid
/// @bug doesnt work
std::string Grid::printGrid() {
  std::string res;
  for ( std::vector<std::vector<int> >::size_type i = 0; i < grid.size(); i++ ) {
     std::string index = std::string(1, static_cast<char>(i+65));
     res.append(index);
     for ( std::vector<int>::size_type j = 0; j < grid[i].size(); j++ ) {
        res.append(std::string(1,grid[i][j]));
        res.append(" ");
     }
     res.append("\n");
  }
  res.append("  ");
  for (int i = 1; i <= size; i++)
     res.append(i + " ");
   return res;
}
