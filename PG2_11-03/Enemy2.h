#pragma once
#include "Enemy.h"
class Enemy2 : public Enemy {
public:

	Enemy2();
	~Enemy2();

	void Update() override;

	void Draw() override;

};

