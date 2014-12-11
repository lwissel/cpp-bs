/**
 ***************************************************************************************
 *
 *       Filename:  Grid.hpp
 *
 *          @brief  Header for the Grid class
 * 
 *                  Grid class representing an abstract 2D int
 *                  array[row][column] whose entries may take one of the
 *                  following values
 *
 *                  - 0 = FOW = FogOfWar, initial value
 *                  - 1 = SHIP (of Player x)
 *                  - 2 = HIT = damaged ship
 *                  - 3 = SUNKEN
 *                  - 4 = MIS = not well aimed = mishit
 *
 *        @version  1.0
 *           @date  18/11/2014 14:24:50
 *        Compiler  gcc
 *
 *        @author  Lennart Wissel (lw), lennart.wissel@gmx.net
 *
 ***************************************************************************************
 */
#include <vector>
#include <string>

#ifndef GRID_HPP_
#define GRID_HPP_


class Grid {
   private:
      /// size = rows = columns of square grid
      int size;

      /// the grid itself should be dynamically allocatable in general
      std::vector< std::vector<int> > grid;
   
      /// private init function used in the constructor
      void init();

      /// overloaded to create arbitrary grid sizes
      void init(int size);
  

  public:
      /// enum to represent grid values
      enum gridValues { FOG, SHIP, HIT, SUNKEN, MIS };

      /// 10x10 2D grid to be the standard
      static const int defaultGridSize = 10;
    
      /// default constructor
      Grid();

      /// generic vector sized arrays for different gamemodes
      Grid(int size);
      
      /// gets the size of the game grid
      int getSize();

      /// gets the value of a specific field in the grid
      int getValue(int row, int col);

      /// sets the value of a specific field in the grid
      void setValue(int row, int col, gridValues value);
      
      /// @brief this is only for testing/logging
      ///
      /// @todo should be replaced by a proper method to display grids
      std::string printGrid();
};
#endif // GRID_HPP_
