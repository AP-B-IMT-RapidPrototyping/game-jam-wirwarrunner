//
// Created by Elmahdi on 22/05/2026.
//

#include "Player.h"
#include "raylib.h"
#include <iostream>

Player::Player() {
    row = 0;
    column = 0;
}

void Player::TakeDamage(int Damage) {
    health -= Damage;

    std::cout << "Player lost one life, You have " << health << " lives left." << std::endl;
}

