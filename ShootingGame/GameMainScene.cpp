#include"DxLib.h"
#include"GameMainScene.h"

GameMain::GameMain() {

}

AbstractScene* GameMain::Update() {

	return this;
}

void GameMain::Draw() const{
	DrawBox(0, 0, 32, 32, GetColor(255, 255, 255), TRUE);
}