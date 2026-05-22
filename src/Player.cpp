//
// Created by alenh on 22/05/2026.
//

#include "Player.h"
#include "raylib.h"


void LimitMovement(float x, float y, float width, float height) {
    if (x <= 0) {
        x = 0;
    }
    if (x + width >= GetScreenWidth()) {
        x = GetScreenWidth() - width;
    }
    if (y <= 0) {
        y = 0;
    }
    if (y + height >= GetScreenHeight()) {
        x = GetScreenHeight() - height;
    }
}


void Draw(float x, float y, float width, float height) {
    DrawRectangle(x, y, width, height, BLUE);
}
void Update(float x, float y, float speed) {
    if (IsKeyDown(KEY_UP)) {
        y -= speed;
    }
    if (IsKeyDown(KEY_DOWN)) {
        y += speed;

    }
    if (IsKeyDown(KEY_LEFT)) {
        x -= speed;

    }
    if (IsKeyDown(KEY_RIGHT)) {
        x += speed;
    }
    LimitMovement(x, y, width, height);
}
