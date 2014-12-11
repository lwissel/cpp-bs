/*
 ***************************************************************************************
 *
 *       Filename:  Ship.cpp
 *
 *          @brief  Implementation for the Ship class
 *        @version  1.0
 *           @date  11/12/2014 16:51:18
 *        Compiler  gcc
 *
 *        @author  Lennart Wissel (lw), lennart.wissel@gmx.net
 *
 ***************************************************************************************
 */

#include "Ship.hpp"

/*-----------------------------------------------------------------------------
 *  constructors
 *-----------------------------------------------------------------------------*/

/// @brief default constructor
/// 
Ship::Ship() {
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
