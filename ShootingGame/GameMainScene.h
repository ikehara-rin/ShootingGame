#pragma once
#include"AbstractScene.h"
#include"common.h"
#include"Player.h"

class GameMainScene :public AbstractScene{
private:

	int player;
	int life;
	int* enemy[ENEMY_MAX];
	int* bullet[BULLET_MAX];

	//Player p;


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