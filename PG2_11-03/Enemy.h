#pragma once

class Enemy {
public:
    int posX_;
    int posY_;
    int speed_;
    int radius_;

    Enemy();
    virtual ~Enemy();

    virtual void Update();
    virtual void Draw();
};