//
// Created by alenh on 22/05/2026.
//

#include "grid_test.h"
#include <iostream>

Grid::Grid()
{
    rows = 24;
    collumns = 39;
    size = 64;
    Initialize();
}

void Grid::Initialize() {
    for (int row = 0; row < rows; row++) {
        for (int collumn = 0; collumn < collumns; collumn++) {
            grid[row][collumn] = 1;
        }
    }
}

void Grid::Print() {
    for (int row = 0; row < rows; row++) {
        for (int collumn = 0; collumn < collumns; collumn++) {
            std::cout << grid[row][collumn] << " ";
        }
        std :: cout << std::endl;
    }
}

void Grid::Draw() {
    for (int row = 0; row < rows; row++) {
        for (int collumn = 0; collumn < collumns; collumn++) {
            int cellValue = grid[row][collumn];

            if (cellValue == 0) {
                DrawRectangle(collumn * size, row * size, size, size, WHITE);
            }
            else {
                DrawRectangle(collumn * size, row * size, size, size, BLACK);

            }
        }
    }
}