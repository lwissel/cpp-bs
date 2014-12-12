/**
 ***************************************************************************************
 *
 *       Filename: Player.hpp
 *
 *         @brief  Player class header
 *
 *                 Players are important objects for the Control class, as they
 *                 operate on the different grids and their fleet
 *
 *                 @todo AI representation, proper exception handling and registration
 *
 *       @version  1.0
 *          @date  12/12/14 11:42:45
 *       Compiler:  gcc
 *
 *        @author  Lennart Wissel (lw), lennart.wissel@gmx.net
 *
 ***************************************************************************************
 */

#include <string>
#include <vector>

#include "Grid.hpp"
#include "Fleet.hpp"

#ifndef PLAYER_HPP_
#define PLAYER_HPP_

class Player {
   private:
      /// represents the name of the player
      std::string name;

      /// the grid of the player, where he places his own ships
      Grid ownGrid;

      /// the grid of the opponent, where the player shoots at
      Grid opponentGrid;

      /// the fleet of ships of this player
      Fleet fleet;

   public:
      /// constructor
      Player(std::string name, Grid ownGrid, Grid opponentGrid, Fleet fleet);


      /// getter for name
      std::string getName();

      /// getter for own grid
      Grid getOwnGrid();

      /// getter for opponents grid
      Grid getOpponentGrid();

      /// getter for fleet
      Fleet getFleet();

      /// setter for name
      void setName(std::string name);

      /// setter for own grid
      void setOwnGrid(Grid ownGrid);

      /// setter for opponents grid
      void setOpponentGrid(Grid opponentGrid);

      /// setter for fleet
      void setFleet(Fleet fleet);
};
#endif // PLAYER_HPP_
