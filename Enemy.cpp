#include "Enemy.h"
#include "Player.h"
#include <Windows.h>

void Enemy::Initialize() {
	position_ = {590.0f, 300.0f};
	isDead_ = false;
}

void Enemy::Update() { 

	// playerの弾との距離
	if (position_.y <= player_->GetBulletPos().y + 50 &&
	    player_->GetBulletPos().y <= position_.y + 50) {
	
		if (position_.x <= player_->GetBulletPos().x + 50 &&
		    player_->GetBulletPos().x <= position_.x + 50) {
			isDead_ = true;
		}
	}
	
}

void Enemy::Draw() {
	
	if (!isDead_) {
		Novice::DrawBox((int)position_.x, (int)position_.y, 50, 50, 0.0f, WHITE, kFillModeSolid);
	
	}
	
}
