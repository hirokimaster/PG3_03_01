#pragma once
#include "Vector2.h"
#include "Novice.h"

class Player;

class Enemy {
public:

	void Initialize();

	void Update();

	void Draw();

	bool IsDead()const { return isDead_; }

	void SetPlayer(Player* player) { player_ = player; }

	
private:
	Vector2 position_ = {};
	Player* player_ = nullptr;
	float moveSpeed_ = 5.0f;
	bool isDead_ = false;
};
