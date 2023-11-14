#include "Player.h"

void Player::Initialize() { 
	position_ = {590.0f, 670.0f};
	bulletPosition_ = {-100.0f, 0.0f};
}

void Player::Update() {
	// キー入力を受け取る
	memcpy(preKeys, keys, 256);
	Novice::GetHitKeyStateAll(keys);

	
	if (keys[DIK_SPACE] && !preKeys[DIK_SPACE] && !isShot_) {
		bulletPosition_ = position_;
		bulletSpeed_ = 7.0f;
		isShot_ = true;
	}

	if (isShot_ && bulletPosition_.y <= 0.0f) {
		isShot_ = false;
	}

	bulletPosition_.y -= bulletSpeed_;

	if (bulletPosition_.y <= 300) {
	
	}
	
}

void Player::Draw() {
	Novice::DrawBox((int)position_.x, (int)position_.y, 50, 50, 0.0f, WHITE, kFillModeSolid);
	Novice::DrawBox((int)bulletPosition_.x, (int)bulletPosition_.y, 50, 50, 0.0f, WHITE,kFillModeSolid);								 

}

Vector2 Player::GetBulletPos() { 
	 Vector2 result;
	result.x = bulletPosition_.x;
	result.y = bulletPosition_.y;
	return result;
}
