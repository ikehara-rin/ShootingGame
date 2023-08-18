#include"DxLib.h"
#include"GameMainScene.h"
#include"InputKey.h"
#include"Player.h"

GameMain::GameMain() {

}

AbstractScene* GameMain::Update() {
	p.Update();
	return this;
}

void GameMain::Draw() const{
	p.Draw();
}