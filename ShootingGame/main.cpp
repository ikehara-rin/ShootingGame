#include"SceneManager.h"
//#include"TitleScene.h"
#include"DxLib.h"
#include"InputKey.h"
#include"GameMainScene.h"

int WINAPI WinMain(_In_ HINSTANCE hInstance, _In_opt_ HINSTANCE hPrevInstance, _In_ LPSTR lpCmdLine, _In_ int nCmdShow)
{
	// タイトルを test に変更
	SetMainWindowText("test");

	//ウィンドウモードで起動
	ChangeWindowMode(TRUE);
	
	SetGraphMode(1280,720,32);

	//DXライブラリの初期化処理
	if (DxLib_Init() == -1) return -1;

	SceneManager sceneMng(dynamic_cast<AbstractScene*>(new GameMainScene()));

	SetDrawScreen(DX_SCREEN_BACK);	// 描画先画面を裏にする

	SetFontSize(20);		// 文字サイズを設定

	while (ProcessMessage() == 0) {

		ClearDrawScreen();		// 画面の初期化

		InputKey::UpdateKey();	//キー入力取得＆更新

		sceneMng.Update();		//シーン更新
		sceneMng.Draw();		//シーン描画

		ScreenFlip();			// 裏画面の内容を表画面に反映

	}

	DxLib_End();	// DXライブラリ使用の終了処理

	return 0;
}