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
  public:
    Grid(int rows, int columns);
    void printGrid();

  private:
    int rows;
    int columns;
    enum gridValues { FOW, SHIP, HIT, SUNKEN, NWA };
    std::vector< std::vector<int> > grid;

};
#endif // GRID_HPP_
