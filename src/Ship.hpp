/**
 * *************************************************************************************
 *
 *       Filename:  Ship.hpp
 *
 *         @brief  Ship class representing Ships on the Grid
 *
 *                 A ship has a size, a name and coordinates to represent its
 *                 position on the battlefield
 *                 default constructor values are size = 0, orientation = s,
 *                 position = origin, type = ship
 *
 *       @version  1.0
 *          @date  11/12/14 16:54:40
 *       Compiler:  gcc
 *
 *        @author  Lennart Wissel (lw), lennart.wissel@gmx.net
 *
 * *************************************************************************************
 */
#include <string>

#ifndef SHIP_HPP_
#define SHIP_HPP_

class Ship {
   private:
      /// size = length of the ship, we only allow 1square width ships
      int size;

      /// type = classification of the ship
      std::string type;

      /// xpos is starting row, ypos is starting column
      /// we count from top left = origin
      int xpos, ypos;

      /// @brief orientation indicated by characters n, s, w, e
      /// n = north
      /// s = south
      /// w = west
      /// e = east
      char orientation;

   public:
      /// connstructor
      Ship(int size = 0, std::string type = "ship", int xpos = 0, int ypos = 0, char orientation = 's');

      /// getter for size
      int getSize();

      /// getter for type
      std::string getType();

      /// getter for xpos
      int getXpos();

      /// getter for ypos
      int getYpos();

      /// getter for orientation
      char getOrientation();

      /// setter for size
      void setSize(int size);

      /// setter for type
      void setType(std::string type);

      /// setter for xpos
      void setXpos(int xpos);

      /// setter for ypos
      void setYpos(int ypos);

      /// setter for orientation
      void setOrientation(char orientation);
};
#endif // SHIP_HPP_
