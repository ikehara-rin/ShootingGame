#include"DxLib.h"
#include"GameMainScene.h"
#include"InputKey.h"
#include"SphereCollider.h"
#include"CharaBase.h"
#include"Player.h"

Player p;
GameMainScene::GameMainScene() {

}

AbstractScene* GameMainScene::Update() {
	p.Move();
	return this;
}

void GameMainScene::Draw() const{
	p.Draw();
}

void GameMainScene::HitCheck() {

}

void GameMainScene::SpawnBullet() {

}

