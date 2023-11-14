#pragma once
#include "IScene.h"
#include <memory>

class GameManager {
private:

	 std::unique_ptr<IScene> sceneArr_[3];

	 int currentSceneNo_; // 現在のシーン
	 int prevSceneNo_; // 前のシーン
	

public:
	 GameManager();
	 ~GameManager();
	  
	 int Run(); // ゲームループを呼び出す


};
