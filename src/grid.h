//
// Created by alenh on 22/05/2026.
//

#ifndef EXAMEN_RAYLIB_GRID_H
#define EXAMEN_RAYLIB_GRID_H

#pragma once
#include <raylib.h>

class Grid {
public:
    Grid();
    void Initialize();
    void Print();
    void Draw();
    int grid [50][50];
private:
    int rows;
    int collumns;
    int size;
};


#endif //EXAMEN_RAYLIB_GRID_H