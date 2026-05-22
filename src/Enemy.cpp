//
// Created by alenh on 22/05/2026.
//

#include "Enemy.h"
#include "raylib.h"

void Draw(float x, float y, float width, float height) {
    DrawRectangle(x, y, width, height, RED);
}
void Update (float target_x, float target_y, float x, float y, float width, float height, float speed) {
    if (x + width / 2 < target_x - 5) {
        x +=speed;

    }
    if (x + width / 2 > target_x + 5) {
        x -= speed;
    }
    if (y + height / 2 < target_y - 5) {
        y += speed;
    }
    if (y + height / 2 > target_y + 5) {
        y -= speed;

    }
    LimitMovement(float x, float y, float width, float height);
}