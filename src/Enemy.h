//
// Created by alenh on 22/05/2026.
//

#ifndef EXAMEN_RAYLIB_ENEMY_H
#define EXAMEN_RAYLIB_ENEMY_H
#include "Player.h"


class Enemy: public Player {
public:
    void Draw(float x, float y, float width, float height);
    void Update(float target_x, float target_y, float x, float y, float width, float height, float speed);
};


#endif //EXAMEN_RAYLIB_ENEMY_H