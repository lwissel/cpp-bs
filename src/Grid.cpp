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

#include <sstream>
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
///   note that the maximum is set to 99 at the moment
void Grid::init(int size) {
    if (size > 99)
       size = 99;
    this->size = size;
    this->grid.resize(size, std::vector<int>(size));
    this->grid.assign(size, std::vector<int>(size,this->FOG));
}



/*-----------------------------------------------------------------------------
 *  public methods
 *-----------------------------------------------------------------------------*/

/// @brief getter for the size of the grid
/// @return size of the square matrix
int Grid::getSize() {
    return this->size;
}


/// @brief method to get the value of a specific grid field
/// @param row describes the row
/// @param col describes the column
/// @return the gridValue of the named field
int Grid::getValue(int row, int col) {
   if (row >= size || col >= size)
      return FOG;

   return this->grid[row][col];
}


/// @brief method to set the value of a specific grid field
/// @param row describes the row
/// @param col describes the column
/// @param value is an integer from 0-4 representing the field state enums
void Grid::setValue(int row, int col, gridValues value) {
   if (row >= size || col >= size)
      return;

   this->grid[row][col] = value;
}



/// @brief prints the grid in raw form
/// @return string representation of the grid with number representing the
/// field state. Will create Column A...J.. and Row 1 ... 10.. depending on the
/// size of the grid, eg
/// A 0 0 0
/// B 0 0 0
/// C 0 0 0
///   1 2 3
/// @todo in control/player class: replace grid values by proper symbols
/// depending on what each player is supposed to see
/// for numbers over 10 the coordinates won't be aligned at the moment
std::string Grid::printGrid() {
  std::ostringstream os; ///< String concatenation in c++ workaround

  os << "\n";
  for ( std::vector<std::vector<int> >::size_type i = 0; i < grid.size(); i++ ) {
     std::string index = std::string(1, static_cast<char>(i+65));
     os << index << " ";
     for ( std::vector<int>::size_type j = 0; j < grid[i].size(); j++ ) {
        os << grid[i][j] << " ";
     }
     os << "\n";
  }
  os << "  ";
  for (int i = 1; i <= size; i++)
     os << i << " ";

  os << "\n";
   return os.str();
}
