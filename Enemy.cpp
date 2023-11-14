#include "Enemy.h"

void Enemy::Initialize() {
	position_ = {590.0f, 300.0f};
	isDead_ = false;
}

void Enemy::Update() { 
	position_;
	player_->GetBulletPos()
}

void Enemy::Draw() {
	
	if (!isDead_) {
		Novice::DrawBox((int)position_.x, (int)position_.y, 50, 50, 0.0f, WHITE, kFillModeSolid);
	
	}
	
}
