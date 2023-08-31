#include"DxLib.h"
#include"TitleScene.h"
#include"InputKey.h"

//コンストラクタ
Title::Title() {
	//タイトル画像データの読み込み
	/*TitleImg = LoadGraph("images/Title.bmp");*/

	//初期化
	MenuNumber = 0;
	MenuY = 0;
}

AbstractScene* Title::Update() {
	//メニューカーソル移動処理
	if (InputKey::KeyFlg & PAD_INPUT_DOWN) {
		if (++MenuNumber > 2) MenuNumber = 0;
	}
	if (InputKey::KeyFlg & PAD_INPUT_UP) {
		if (--MenuNumber < 0) MenuNumber = 2;	
	}

	//メニューカーソル（三角形）の計算
	MenuY = MenuNumber * 52;

	// Ｚキーでメニュー選択
	if (InputKey::KeyFlg & PAD_INPUT_A) {
		//switch (MenuNumber) {
		//case 0:
		//	break;
		//case 1:
		//	break;
		//}
	};
	return this;
}

void Title::Draw()const {
	//タイトル画像表示
	//DrawGraph(0, 0, TitleImg, FALSE);

	//メニューカーソル（三角形）の表示
	DrawTriangle(240, 255 + MenuY, 260, 270 + MenuY, 240, 285 + MenuY, GetColor(255, 0, 0), TRUE);

}