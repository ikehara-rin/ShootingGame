#pragma once
#include"GameMainScene.h"

class BulletSpawner {
protected:

	int speed;

	int angle;

	float acceleration;

	float angleVelocity;

public:
	BulletSpawner();

	~BulletSpawner() {};

	virtual void Shoot();
};