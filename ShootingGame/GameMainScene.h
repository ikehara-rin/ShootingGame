#pragma once
#include"AbstractScene.h"
#include"Player.h"

class GameMain :public AbstractScene{
private:

	Player p;

	int Player;
	int life;
	int* enemy;
	int* bullet;

public:
	//�R���X�g���N�^
	GameMain();

	//�f�X�g���N�^
	virtual~GameMain() {};

	//�`��ȊO�̍X�V����������
	virtual AbstractScene* Update() override;
	//�`��Ɋւ��邱�Ƃ���������
	virtual void Draw()const override;
};