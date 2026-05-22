#include <iostream>
#include "raylib.h"
#include "src/grid.h"




class Player {
protected:
    void LimitMovement() {
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
public:
    float x,y;
    float width, height;
    int speed;

    void Draw() {
        DrawRectangle(x, y, width, height, BLUE);
    }
    void Update() {
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
        LimitMovement();
    }

};

class Enemy: public Player {
public:
    float x,y;
    float width, height;
    int speed;

    void Draw() {
        DrawRectangle(x, y, width, height, RED);
    }
    void Update (float target_x, float target_y) {
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
        LimitMovement();
    }

};

Player player;
Enemy enemy;

int main() {
    Grid grid = Grid();
    grid.Initialize();
    grid.Print();
    const int screen_width = 1280;
    const int screen_height = 800;
    InitWindow(screen_width, screen_height, "The WirWar Runner");
    SetTargetFPS(60);

    player.width = 60;
    player.height = 60;
    player.x = 100;
    player.y = 100;
    player.speed = 6;

    enemy.width = 60;
    enemy.height = 60;
    enemy.x = 800;
    enemy.y = 500;
    enemy.speed = 4;



    while (WindowShouldClose() == false) {
        BeginDrawing();
        ClearBackground(BLACK);

        //Updating
        grid.Draw();
        player.Update();
        enemy.Update(
            player.x + player.width / 2,
            player.y + player.height / 2
        );

        //Checking for collisions

        //Drawing
        player.Draw();
        enemy.Draw();


        EndDrawing();
    }

    CloseWindow();
    return 0;
}