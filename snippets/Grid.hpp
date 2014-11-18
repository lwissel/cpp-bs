/*
 * =====================================================================================
 *
 *       Filename:  Grid.hpp
 *
 *    Description:  Header for the Grid class
 *                  Grid class representing an abstract 2D int
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
 *        Created:  18/11/2014 14:24:50
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Lennart Wissel (lw), lennart.wissel@gmx.net
 *   Organization:  UoB
 *
 * =====================================================================================
 */
#include <vector>

#ifndef GRID_HPP_
#define GRID_HPP_
class Grid {
  private:
      int size;
      enum gridValues { FogOfWar, SHIP, HIT, SUNKEN, NWA };
      std::vector< std::vector<int> > grid;
   
      void init();
      void init(int size);

  public:
    static const int defaultGridSize = 10; // 10x10 2D grid
    
    // Constructors
    Grid(); // default constructor creates classical game grid 10x10
    Grid(int size); // generic vector sized arrays for different gamemodes
    
    // Getters
    int getSize();

    // Setters
    void setValue(int row, int col, gridValues value);
    
    // Misc
     void printGrid();
     
     
  
};
#endif // GRID_HPP_
