//
// Created by Elmahdi on 22/05/2026.
//

#include "Player.h"
#include <iostream>

Player::Player() {
    row = 0;
    colomn = 0;
}

void Player::TakeDamage(int Damage) {
    health -= Damage;

    std::cout << "Player lost one life, You have " << health << " lives left." << std::endl;
}


void CurrentPosition() {
    if (IsKeyDown(KEY_UP)) {
        Grid.Check();

        if (Grid.Check == true) {
            row = row - 1;
        }
    }

    if (IsKeyDown(KEY_DOWN)) {
        Grid.Check();

        if (Grid.Check == true) {
            row = row + 1;
        }
    }

    if (IsKeyDown(KEY_LEFT)) {
        Grid.Check;

        if (Grid.Check == true) {
            colomn = colomn + 1;
        }
    }

    if (IsKeyDown(KEY_RIGHT)) {
        Grid.Check;

        if (Grid.Check == true) {
            colomn = colomn - 1;
        }
    }
}
