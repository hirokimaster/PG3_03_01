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
	player_->Update();
	enemy_->Update();
	

}

void StageScene::Draw() {
	player_->Draw();
	enemy_->Draw();
}
