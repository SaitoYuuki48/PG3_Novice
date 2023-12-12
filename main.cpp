#include <Novice.h>
#include "IScene.h"
#include "GameManager.h"

const char kWindowTitle[] = "LE2C_07_サイトウ_ユウキ_PG3_3-1";

// Windowsアプリでのエントリーポイント(main関数)
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {

	// ライブラリの初期化
	Novice::Initialize(kWindowTitle, 1280, 720);

	GameManager* gameManager = new GameManager();

	//ゲームループ
	gameManager->Run();

	// ライブラリの終了
	Novice::Finalize();
	return 0;
}
