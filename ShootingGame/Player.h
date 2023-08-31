#pragma once
#include"BulletSpawner.h"
#include"GameMainScene.h"
#include"CharaBase.h"

class Player :public CharaBase {
protected:

	int PlayerX;
	int PlayerY;
	int PlayerXX;
	int PlayerYY;

	int score;
	//BulletSpawner* weapon;
	
public:
	void Move();

	Player();
	//デストラクタ
	virtual~Player() {};
	//描画以外の更新を実装する
	void Update(GameMainScene* GM) override;
	//描画に関することを実装する
	void Draw()const override;

	void Hit() override;

};