//
// Created by alenh on 22/05/2026.
//

#ifndef EXAMEN_RAYLIB_PLAYER_H
#define EXAMEN_RAYLIB_PLAYER_H


class Player {
protected:
    void LimitMovement(float x, float y, float width, float height);
public:
    void Draw(float x, float y, float width, float height);
    void Update(float x, float y, float speed);

};



#endif //EXAMEN_RAYLIB_PLAYER_H