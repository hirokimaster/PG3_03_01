#pragma once
#include "Novice.h"
#include "Vector2.h"
#include "Enemy.h"

class Player {
public:

	void Initialize();

    void Update();

    void Draw(); 

	Vector2 GetBulletPos();

private:

	Vector2 position_ = {};
	Vector2 bulletPosition_ = {};
	float bulletSpeed_ = 0.0f;
	bool isShot_;
	char keys[256] = {0};
	char preKeys[256] = {0};
};

