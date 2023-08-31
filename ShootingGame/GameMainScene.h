#pragma once
#include"AbstractScene.h"
#include"common.h"


class GameMainScene :public AbstractScene{
private:

	int life;
	int* enemy[ENEMY_MAX];
	int* bullet[BULLET_MAX];



public:
	//コンストラクタ
	GameMainScene();

	void HitCheck();

	void SpawnBullet();
	//デストラクタ
	virtual~GameMainScene() {};

	//描画以外の更新を実装する
	virtual AbstractScene* Update() override;
	//描画に関することを実装する
	virtual void Draw()const override;
};