/*
 ***************************************************************************************
 *
 *       Filename: Fleet.cpp
 *
 *         @brief  Fleet class implementation 
 *
 *       @version  1.0
 *          @date  12/12/14 12:04:50
 *       Compiler:  gcc
 *
 *        @author  Lennart Wissel (lw), lennart.wissel@gmx.net
 *
 ***************************************************************************************
 */

#include <sstream>
#include <string>
#include <vector>
#include <algorithm>

#include "Fleet.hpp"
#include "Ship.hpp"

/*-----------------------------------------------------------------------------
 *  constructor
 *-----------------------------------------------------------------------------*/


/// @brief constructor creates an empty fleet
Fleet::Fleet(std::vector<Ship> ships) {
   this->shipsUndestroyed = ships.size();
   this->ships = ships;
}


/*-----------------------------------------------------------------------------
 *  getters and setters
 *-----------------------------------------------------------------------------*/

/// @brief getter for the number of functional ships
/// @return number of undestroyed ships
int Fleet::getShipsUndestroyed() {
   return this->shipsUndestroyed;
}


/// @brief get the vector containing all ships of the fleet
std::vector<Ship> Fleet::getShips() {
   return this->ships;
}


/// @brief setter for the fleet
void Fleet::setShips(std::vector<Ship> ships) {
   this->ships = ships;
   this->shipsUndestroyed = ships.size();
}


/// @brief calls the vector add function and adds to the number of ships
void Fleet::addShip(Ship ship) {
   this->ships.push_back(ship);
   shipsUndestroyed++;
}


/// @brief calls the vector remove function and reduces the number of ships
/// @bug not working at the moment
/** 
void Fleet::delShip(Ship ship) {
   for (std::vector<Ship>::const_iterator it = this->ships.begin(); it != this->ships.end(); ++it) {
      if (ships[it] == ship)
         this->ships.erase(it);
   }
   shipsUndestroyed--;
}
*/

/// @brief string representation of fleet
/// @return a combined to string method for all ships
std::string Fleet::printFleet() {
   std::ostringstream os;
   os << "Fleet: \n";

   for (unsigned int i = 0; i < ships.size(); i++)
      os << "\t" << ships[i].printShip() << std::endl;

   return os.str();
}
