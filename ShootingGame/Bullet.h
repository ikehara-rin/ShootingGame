#pragma once
#include"SphereCollider.h"

class Bullet :public SphereCollider {
protected:
	int damage;

	int speed;

	int angle;

	float acceleration;

	float angleVelocity;

	Bullet();

	~Bullet() {};

	void Update();

	void Draw();

	void GetDamage();
};