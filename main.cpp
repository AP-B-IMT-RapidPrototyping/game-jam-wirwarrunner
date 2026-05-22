#include <iostream>
#include "raylib.h"

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