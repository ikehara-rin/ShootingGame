#pragma once
#include"AbstractScene.h"
#include"common.h"


class GameMainScene :public AbstractScene{
private:

	int life;
	int* enemy[ENEMY_MAX];
	int* bullet[BULLET_MAX];



public:
	//�R���X�g���N�^
	GameMainScene();

	void HitCheck();

	void SpawnBullet();
	//�f�X�g���N�^
	virtual~GameMainScene() {};

	//�`��ȊO�̍X�V����������
	virtual AbstractScene* Update() override;
	//�`��Ɋւ��邱�Ƃ���������
	virtual void Draw()const override;
};