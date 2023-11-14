#pragma once
#include "Vector2.h"
#include "Novice.h"
#include "Player.h"
class Enemy {
public:

	void Initialize();

	void Update();

	void Draw();

	
private:
	Vector2 position_ = {};
	Player* player_;
	float moveSpeed_ = 5.0f;
	bool isDead_ = false;
};
