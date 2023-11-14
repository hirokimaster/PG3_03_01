#include "StageScene.h"

void StageScene::Initialize() {

	// player
	player_ = std::make_unique<Player>();
	player_->Initialize();
	// enemy
	enemy_ = std::make_unique<Enemy>();
	enemy_->Initialize();
}

void StageScene::Update() {
	enemy_->SetPlayer(player_.get());
	player_->Update();
	enemy_->Update();
	// 敵が死んだらゲームクリアに移行
	if (enemy_->IsDead()) {
		sceneNo_ = CLEAR;
	}

}

void StageScene::Draw() {
	player_->Draw();
	enemy_->Draw();
}
