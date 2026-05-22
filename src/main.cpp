#include <iostream>
#include "raylib.h"
#include "grid.h"
#include "Player.h"
#include "Enemy.h"

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

    player.width = 64;
    player.height = 64;
    player.x = 32;
    player.y = 16;
    player.speed = 16;

    enemy.width = 64;
    enemy.height = 64;
    enemy.x = 800;
    enemy.y = 500;
    enemy.speed = 4;



    while (WindowShouldClose() == false) {
        BeginDrawing();
        ClearBackground(BLACK);

        //Updating
        grid.Draw();
        player.Update(x, y, speed);
        enemy.Update(
            player.x + player.width / 2,
            player.y + player.height / 2
        );


        //Checking for collisions

        //Drawing
        player.Draw(x, y, width, height);
        enemy.Draw(x, y, width, height);




        EndDrawing();
    }

    CloseWindow();
    return 0;
}