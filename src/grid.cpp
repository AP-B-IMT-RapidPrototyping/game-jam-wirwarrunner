//
// Created by alenh on 22/05/2026.
//

#include "grid.h"
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
            if (row == 0 && collumn == 0) {grid[row][collumn] = 0;}
            if (row == 1 && collumn == 0) {grid[row][collumn] = 0;}
            if (row == 2 && collumn == 0) {grid[row][collumn] = 0;}
            if (row == 2 && collumn == 1) {grid[row][collumn] = 0;}
            if (row == 2 && collumn == 2) {grid[row][collumn] = 0;}
            if (row == 2 && collumn == 3) {grid[row][collumn] = 0;}
            if (row == 1 && collumn == 3) {grid[row][collumn] = 0;}
            if (row == 1 && collumn == 4) {grid[row][collumn] = 0;}
            if (row == 1 && collumn == 5) {grid[row][collumn] = 0;}
            if (row == 2 && collumn == 5) {grid[row][collumn] = 0;}
            if (row == 3 && collumn == 5) {grid[row][collumn] = 0;}
            if (row == 4 && collumn == 5) {grid[row][collumn] = 0;}
            if (row == 3 && collumn == 5) {grid[row][collumn] = 0;}
            if (row == 2 && collumn == 5) {grid[row][collumn] = 0;}
            if (row == 2 && collumn == 6) {grid[row][collumn] = 0;}
            if (row == 2 && collumn == 7) {grid[row][collumn] = 0;}
            if (row == 5 && collumn == 5) {grid[row][collumn] = 0;}
            if (row == 6 && collumn == 5) {grid[row][collumn] = 0;}
            if (row == 6 && collumn == 4) {grid[row][collumn] = 0;}
            if (row == 6 && collumn == 3) {grid[row][collumn] = 0;}
            if (row == 6 && collumn == 2) {grid[row][collumn] = 0;}
            if (row == 5 && collumn == 3) {grid[row][collumn] = 0;}
            if (row == 4 && collumn == 3) {grid[row][collumn] = 0;}
            if (row == 4 && collumn == 2) {grid[row][collumn] = 0;}
            if (row == 2 && collumn == 7) {grid[row][collumn] = 0;}
            if (row == 3 && collumn == 7) {grid[row][collumn] = 0;}
            if (row == 4 && collumn == 7) {grid[row][collumn] = 0;}
            if (row == 4 && collumn == 8) {grid[row][collumn] = 0;}
            if (row == 7 && collumn == 2) {grid[row][collumn] = 0;}
            if (row == 8 && collumn == 2) {grid[row][collumn] = 0;}
            if (row == 8 && collumn == 3) {grid[row][collumn] = 0;}
            if (row == 4 && collumn == 2) {grid[row][collumn] = 0;}
            if (row == 4 && collumn == 1) {grid[row][collumn] = 0;}
            if (row == 4 && collumn == 0) {grid[row][collumn] = 0;}
            if (row == 5 && collumn == 0) {grid[row][collumn] = 0;}
            if (row == 6 && collumn == 0) {grid[row][collumn] = 0;}
            if (row == 2 && collumn == 8) {grid[row][collumn] = 0;}
            if (row == 1 && collumn == 8) {grid[row][collumn] = 0;}
            if (row == 9 && collumn == 3) {grid[row][collumn] = 0;}
            if (row == 10 && collumn == 3) {grid[row][collumn] = 0;}
            if (row == 10 && collumn == 2) {grid[row][collumn] = 0;}
            if (row == 8 && collumn == 4) {grid[row][collumn] = 0;}
            if (row == 8 && collumn == 5) {grid[row][collumn] = 0;}
            if (row == 9 && collumn == 5) {grid[row][collumn] = 0;}
            if (row == 10 && collumn == 5) {grid[row][collumn] = 0;}
            if (row == 11 && collumn == 5) {grid[row][collumn] = 0;}
            if (row == 11 && collumn == 6) {grid[row][collumn] = 0;}
            if (row == 0 && collumn == 8) {grid[row][collumn] = 0;}
            if (row == 0 && collumn == 9) {grid[row][collumn] = 0;}
            if (row == 0 && collumn == 10) {grid[row][collumn] = 0;}
            if (row == 1 && collumn == 10) {grid[row][collumn] = 0;}
            if (row == 8 && collumn == 6) {grid[row][collumn] = 0;}
            if (row == 7 && collumn == 6) {grid[row][collumn] = 0;}
            if (row == 7 && collumn == 7) {grid[row][collumn] = 0;}
            if (row == 5 && collumn == 8) {grid[row][collumn] = 0;}
            if (row == 7 && collumn == 8) {grid[row][collumn] = 0;}

            if (cellValue == 0) {
                DrawRectangle(collumn * size, row * size, size, size, WHITE);
            }
            else {
                DrawRectangle(collumn * size, row * size, size, size, BLACK);

            }
        }
    }
}