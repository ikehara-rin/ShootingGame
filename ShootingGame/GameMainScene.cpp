#include"DxLib.h"
#include"GameMainScene.h"
#include"InputKey.h"
#include"SphereCollider.h"
#include"CharaBase.h"
#include"Player.h"

Player p;
GameMainScene::GameMainScene() {
	Color = GetColor(255, 0, 0);
}

AbstractScene* GameMainScene::Update() {
	p.Move();
	return this;
}

void GameMainScene::Draw() const{
	p.Draw();
	DrawString(0, 0, "STARTÇ≈èIóπ",Color ,TRUE);
}

void GameMainScene::HitCheck() {

}

void GameMainScene::SpawnBullet() {

}

