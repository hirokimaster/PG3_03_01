#include <Novice.h>
#include <memory>
#include "GameManager.h"

const char kWindowTitle[] = "PG3_03_01";

// Windowsアプリでのエントリーポイント(main関数)
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {

	// ライブラリの初期化
	Novice::Initialize(kWindowTitle, 1280, 720);

	
	GameManager* gameManager = new GameManager;

	gameManager->Run();

	delete gameManager;
	
}
