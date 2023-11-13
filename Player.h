#pragma once
#include "Novice.h"
#include "Vector2.h"

class Player {
public:

	void Initialize();

    void Update();

    void Draw(); 

private:

	Vector2 position_ = {};
	Vector2 bulletPosition_[100] = {};
	float bulletSpeed_ = 0.0f;
	bool isShot_[100];
	char keys[256] = {0};
	char preKeys[256] = {0};
};

