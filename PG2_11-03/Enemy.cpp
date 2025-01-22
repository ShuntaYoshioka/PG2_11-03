
#include "Enemy.h"
#include <Novice.h>

Enemy::Enemy()
{
	posX_ = 32;
	posY_ = 32;
	speed_ = 8;
	radius_ = 16;
}

Enemy::~Enemy()
{
}

void Enemy::Update()
{
	posX_ += speed_;
	if (posX_ > 1280 || posX_ < 0) {
		speed_ *= -1;
		}
}

void Enemy::Draw()
{
	Novice::DrawEllipse(posX_,posY_	,radius_,radius_,0.0f,RED, kFillModeSolid);
}