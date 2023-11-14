#include "TitleScene.h"

void TitleScene::Initialize() { 
	position = {0.0f, 0.0f}; 
}

void TitleScene::Update() { 

	 // キー入力を受け取る
	memcpy(preKeys, keys, 256);
	Novice::GetHitKeyStateAll(keys);

	if (keys[DIK_R] && !preKeys[DIK_R]) {
		sceneNo_ = STAGE;
	}

}

void TitleScene::Draw() { 
	Novice::DrawBox((int)position.x, (int)position.y, 1280, 720, 0.0f, WHITE, kFillModeSolid);
}