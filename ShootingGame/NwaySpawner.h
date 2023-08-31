#pragma once
#include"BulletSpawner.h"

class NwaySpawner :public BulletSpawner {
protected:
	int numBullet;

	int baseAngle;

	float angleDiff;

	NwaySpawner();

	~NwaySpawner() {};

	void Shoot()override;
};