#pragma once
class SphereCollider {
protected:

	float location;
	float radius;

public:
	//コンストラクタ
	SphereCollider();
	
	//デストラクタ
	virtual ~SphereCollider() {};

	void CheckCollision(SphereCollider);
};