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
	//�f�X�g���N�^
	virtual~Player() {};
	//�`��ȊO�̍X�V����������
	void Update() override;
	//�`��Ɋւ��邱�Ƃ���������
	void Draw()const override;

	void Hit() override;

};