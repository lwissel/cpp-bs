/*
 ***************************************************************************************
 *
 *       Filename: Player.cpp
 *
 *         @brief  Player class implementation 
 *
 *       @version  1.0
 *          @date  12/12/14 15:04:50
 *       Compiler: gcc
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
#include "Grid.hpp"
#include "Player.hpp"

/*-----------------------------------------------------------------------------
 *  constructor
 *-----------------------------------------------------------------------------*/
/// @brief constructor creates a Player
Player::Player(std::string name, Grid ownGrid, Grid opponentGrid, Fleet fleet) {
   this->name = name;
   this->ownGrid = ownGrid;
   this->opponentGrid = opponentGrid;
   this->fleet = fleet;
}

/*-----------------------------------------------------------------------------
 *  getters and setters
 *-----------------------------------------------------------------------------*/

/// @brief return the name of the player
/// @return players name
std::string Player::getName() {
   return this->name;
}

/// @brief return players grid
/// @return own grid
Grid Player::getOwnGrid() {
   return this->ownGrid;
}

/// @brief return opponents grid
/// @return opponents grid
Grid Player::getOpponentGrid() {
   return this->opponentGrid;
}

/// @brief return players fleet
/// @return fleet with all ships of the player
Fleet Player::getFleet() {
   return this->fleet;
}

/// @brief set the name of the player
/// @param name to replace
void Player::setName(std::string name) {
   this->name = name;
}


/// @brief set the players grid
/// @param ownGrid to replace old one
void Player::setOwnGrid(Grid ownGrid) {
   this->ownGrid = ownGrid;
}


/// @brief set the opponents grid
/// @param opponentGrid to replace old
void Player::setOpponentGrid(Grid opponentGrid) {
   this->opponentGrid = opponentGrid;
}

/// @brief setter for fleet
/// @param fleet to replace old fleet
void Player::setFleet(Fleet fleet) {
   this->fleet = fleet;
}
