#pragma once
#include"SphereCollider.h"
#include"GameMainScene.h"

class CharaBase :public SphereCollider {
protected:
	int speed;

	int image;

public:
	CharaBase();

	virtual ~CharaBase() {};

	virtual void Update(GameMainScene* GM);

	virtual void Draw()const;

	virtual void Hit();
};