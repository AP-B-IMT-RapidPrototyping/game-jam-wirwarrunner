#include <iostream>
#include "raylib.h"

class Player {
protected:
    void LimitMovement() {
        if (y <= 0) {
            y = 0;
        }
        if (y + height >= GetScreenHeight()) {
            y = GetScreenHeight() - height;
        }
        if (x <= 0) {
            x = 0;
        }
        if (x + width >= GetScreenWidth()) {
            x = GetScreenWidth() - width;
        }
    }
public:
    float x,y;
    float width, height;
    int speed;

    void Draw() {
        DrawRectangleRounded(Rectangle{x, y, width, height}, 0.8, 0, WHITE);
    }
    void Update() {
        if (IsKeyDown(KEY_UP)) {
            y = y - speed;
        }
        if (IsKeyDown(KEY_DOWN)) {
            y = y + speed;

        }
        if (IsKeyDown(KEY_LEFT)) {
            x = x - speed;

        }
        if (IsKeyDown(KEY_RIGHT)) {
            x = x + speed;
        }
    }
};

class Enemy: public Player {
public:
    
};

int main() {

    const int screen_width = 1280;
    const int screen_height = 800;
    InitWindow(screen_width, screen_height, "The WirWar Runner");
    SetTargetFPS(60);


    while (WindowShouldClose() == false) {
        BeginDrawing();

        //Updating

        //Checking for collisions

        //Drawing


        EndDrawing();
    }

    CloseWindow();
    return 0;
}