#pragma once
class SphereCollider {
protected:

	float location;
	float radius;

public:
	//�R���X�g���N�^
	SphereCollider();
	
	//�f�X�g���N�^
	virtual ~SphereCollider() {};

	void CheckCollision(SphereCollider*location,SphereCollider*radius);
};