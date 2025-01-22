#include "Enemy1.h"
#include <Novice.h>

Enemy1::Enemy1()
{
    posX_ = 300;
    posY_ = 82;
    speed_ = 18;
    radius_ = 32;
}

Enemy1::~Enemy1()
{
}

void Enemy1::Update()
{
    posY_ += speed_;
    if (posY_ > 720 || posY_ < 0) {
        speed_ *= -1;
    }
}

void Enemy1::Draw()
{
    Novice::DrawEllipse(posX_, posY_, radius_, radius_, 0.0f, RED, kFillModeSolid);
}
