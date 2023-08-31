#pragma once
#include"CharaBase.h"
#include"BulletSpawner.h"

class Enemy :public CharaBase {
protected:
	int hp;

	int point;

	//BulletSpawner* weapon;

public:
	Enemy();

	~Enemy() {};

	void Update(GameMainScene* GM)override;

	void Draw()const override;

	void Hit()override;
};