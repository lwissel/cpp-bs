/**
 ***************************************************************************************
 *
 *       Filename: Fleet.hpp
 *
 *         @brief  Fleet class header
 *
 *                 Contains a list of ships that a player can have
 *                 @todo create predefined methods for game modi
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

#include "Ship.hpp"

#ifndef FLEET_HPP_
#define FLEET_HPP_

class Fleet {
   private:
      /// number of ships in the fleet that are not destroyed
      /// to get the total number of ships use the length of the vector
      int shipsUndestroyed;
      
      /// vector containing all the ships in this fleet
      std::vector<Ship> ships;

   public:
      /// constructor creates an empty fleet
      Fleet(std::vector<Ship> ships = std::vector<Ship>());
      
      /// getter for undestroyed ships
      int getShipsUndestroyed();

      /// getter for fleet
      std::vector<Ship> getShips();

      /// setter for fleet
      void setShips(std::vector<Ship> ships);

      /// method to add a ship
      void addShip(Ship ship);

      /// method to remove a ship
      /// @todo proper implementation how to remove a ship
      // void delShip(Ship ship);

      /// method to return a string representation of the fleet
      std::string printFleet();
      
};
#endif // FLEET_HPP_
