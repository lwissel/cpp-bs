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

#include <string>
#include <sstream>

#include "Ship.hpp"

/*-----------------------------------------------------------------------------
 *  constructors
 *-----------------------------------------------------------------------------*/

/// @brief default constructor
/// @param size size of ship
/// @param type is name or type of the ship
/// @param xpos is the x-position of the first ship field starting from top left corner
/// @param ypos is the y-position of the first ship field starting from top left corner
/// @param orientation is the orientation n = north, s = south, w = west, e = east
Ship::Ship(int size, std::string type, int xpos, int ypos, char orientation) {
   this->size = size;
   this->type = type;
   this->xpos = xpos;
   this->ypos = ypos;
   this->orientation = orientation;
}


/*-----------------------------------------------------------------------------
 *  GETTERS 
 *-----------------------------------------------------------------------------*/

/// @brief getter for the size of the ship
/// @return size of the ship
int Ship::getSize() {
    return this->size;
}


/// @brief method to get the type of the ship
/// @return the name or type of the ship
std::string Ship::getType() {
   return this->type;
}


/// @brief getter for xposition
/// @return the x position of the ship
int Ship::getXpos() {
   return this->xpos;
}


/// @brief getter for yposition
/// @return the y position of the ship
int Ship::getYpos() {
   return this->ypos;
}


/// @brief getter for the orientation
/// @return character representing the orientation
char Ship::getOrientation() {
   return this->orientation;
}


/// @brief return a string representation of the ship
/// @return ship properties
std::string Ship::printShip() {
   std::ostringstream os;
   os << "Type: " << this->type << ", Size: " << this->size;
   os << ", Orientation: " << this->orientation;
   os << ", (x,y) Position: " << "(" << this->xpos << "," << this->ypos << ")";

   return os.str();
}


/*-----------------------------------------------------------------------------
 *  SETTERS
 *-----------------------------------------------------------------------------*/

/// @brief setter for the ship size
/// @param size to set the size of the ship
void Ship::setSize(int size) {
   this->size = size;
}


/// @brief setter for type
/// @param new type of the ship
void Ship::setType(std::string type) {
   this->type = type;
}


/// @brief setter for xpos
/// @param new starting position in x direction
void Ship::setXpos(int xpos) {
   this->xpos = xpos;
}


/// @brief setter for ypos
/// @param new starting position in y direction
void Ship::setYpos(int ypos) {
   this->ypos = ypos;
}


/// @brief setter for orientation
/// @param new orientation of the ship
void Ship::setOrientation(char orientation) {
   this->orientation = orientation;
}

bool operator== (Ship &lhs, Ship &rhs) {
   return ( lhs.getSize() == rhs.getSize() &&
            lhs.getType() == rhs.getType() &&
            lhs.getOrientation() == rhs.getOrientation() &&
            lhs.getXpos() == rhs.getXpos() &&
            lhs.getYpos() == rhs.getYpos() );
}

bool operator!= (Ship &lhs, Ship &rhs) {
   return !(lhs == rhs);
}
