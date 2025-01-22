#include "Enemy2.h"
#include <Novice.h>

Enemy2::Enemy2()
{
}

Enemy2::~Enemy2()
{
}

void Enemy2::Update()
{
    posX_ += speed_;
    if (posX_ > 1280 || posX_ < 0) {
        speed_ *= -1;
    }
}

void Enemy2::Draw()
{
	Novice::DrawEllipse(posX_, posY_, radius_, radius_, 0.0f, BLUE, kFillModeSolid);
}
