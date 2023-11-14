#include "GameManager.h"
#include "StageScene.h"
#include "TitleScene.h"
#include "ClearScene.h"
#include <Novice.h>

GameManager::GameManager() {
	  // 各シーンの配列
	  sceneArr_[TITLE] = std::make_unique<TitleScene>();
	  sceneArr_[STAGE] = std::make_unique<StageScene>();
	  sceneArr_[CLEAR] = std::make_unique<ClearScene>();

	  // 初期シーン
	  currentSceneNo_ = TITLE;

}

GameManager::~GameManager() {}

int GameManager::Run() {

	  // キー入力結果を受け取る箱
	  char keys[256] = {0};
	  char preKeys[256] = {0};

	  // ウィンドウの×ボタンが押されるまでループ
	  while (Novice::ProcessMessage() == 0) {
		  // フレームの開始
		  Novice::BeginFrame();

		  // キー入力を受け取る
		  memcpy(preKeys, keys, 256);
		  Novice::GetHitKeyStateAll(keys);

		  // シーンのチェック
		  prevSceneNo_ = currentSceneNo_;
		  currentSceneNo_ = sceneArr_[currentSceneNo_]->GetSceneNo();
		  // シ－ン変更のチェック
		  if (prevSceneNo_ != currentSceneNo_) {
			  sceneArr_[currentSceneNo_]->Initialize();

		  }

		  ///
		  /// ↓更新処理ここから
		  ///

		  sceneArr_[currentSceneNo_]->Update();
		 
		  ///
		  /// ↑更新処理ここまで
		  ///

		  ///
		  /// ↓描画処理ここから
		  ///

		  sceneArr_[currentSceneNo_]->Draw();
		

		  ///
		  /// ↑描画処理ここまで
		  ///

		  // フレームの終了
		  Novice::EndFrame();

		  // ESCキーが押されたらループを抜ける
		  if (preKeys[DIK_ESCAPE] == 0 && keys[DIK_ESCAPE] != 0) {
			  break;
		  }
	  }

	  // ライブラリの終了
	  Novice::Finalize();
	  return 0;
}
