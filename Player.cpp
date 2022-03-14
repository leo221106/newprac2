#include "Player.h"
 
Player::Player() = default;
 
Player::~Player() = default;
 
const std::string &Player::getName() const {
      return name;
}

void Player::setName(const std::string &name) {
    Player::name = name;
    
      