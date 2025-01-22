#pragma once

class Enemy {
protected:
    int posX_;
    int posY_;
    int speed_;
    int radius_;
public:
    Enemy();
    virtual ~Enemy();

    virtual void Update();
    virtual void Draw();
};