#include "Player.h"

void Player::Initialize() { 
	position_ = {590.0f, 670.0f};
}

void Player::Update() {
	// キー入力を受け取る
	memcpy(preKeys, keys, 256);
	Novice::GetHitKeyStateAll(keys);

	for (int i = 0; i < 100; i++) {

		if (keys[DIK_SPACE] && !preKeys[DIK_SPACE] && !isShot_[i]) {
			bulletPosition_[i] = position_;
			bulletSpeed_ = 7.0f;
			isShot_[i] = true;
		}

		if (isShot_[i] && bulletPosition_[i].y <= 0.0f) {
			isShot_[i] = false;
		}

		bulletPosition_[i].y -= bulletSpeed_;
	}

}

void Player::Draw() {
	Novice::DrawBox((int)position_.x, (int)position_.y, 50, 50, 0.0f, WHITE, kFillModeSolid);
	for (int i = 0; i < 100; i++) {
		Novice::DrawBox(
		    (int)bulletPosition_[i].x, (int)bulletPosition_[i].y, 50, 50, 0.0f, WHITE,
		    kFillModeSolid);								 
	}
	
}
