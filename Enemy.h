#pragma once
#include "Vector2.h"
#include "Novice.h"
class Enemy {
public:

	void Initialize();

	void Update();

	void Draw();

	
private:
	Vector2 position_ = {};
	float moveSpeed_ = 5.0f;
	bool isAlive_ = true;
};
