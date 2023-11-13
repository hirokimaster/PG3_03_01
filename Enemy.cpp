#include "Enemy.h"

void Enemy::Initialize() {
	position_ = {590.0f, 300.0f}; 
}

void Enemy::Update() { 
	position_.x += moveSpeed_;

	if (position_.x >= 1230) {
		moveSpeed_ *= -1.0f;

	} else if (position_.x <= 50) {
		moveSpeed_ *= -1.0f;
	}
}

void Enemy::Draw() {
	Novice::DrawBox((int)position_.x, (int)position_.y, 50, 50, 0.0f, WHITE, kFillModeSolid);
}
