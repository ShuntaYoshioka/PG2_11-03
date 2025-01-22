#pragma once
#include "Enemy.h"
class Enemy1 : public Enemy{
public:

	Enemy1();
	~Enemy1();

	void Update() override;

	void Draw() override;
};

