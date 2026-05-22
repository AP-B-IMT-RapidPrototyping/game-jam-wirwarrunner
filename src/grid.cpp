//
// Created by alenh on 22/05/2026.
//

#include "grid.h"
#include <iostream>

Grid::Grid()
{
    rows = 20;
    collumns = 30;
    size = 50;
    Initialize();
}

void Grid::Initialize() {
    for (int row = 0; row < rows; row++) {
        for (int collumn = 0; collumn < collumns; collumn++) {
            grid[row][collumn] = 0;
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
            DrawRectangle(collumn * size, row * size, size, size, BLACK);
        }
    }
}