#pragma once
#include"CharaBase.h"

class Player :public CharaBase {
protected:
	int PlayerX;
	int PlayerY;
	int PlayerXX;
	int PlayerYY;
	void Move();
public:
	Player();
	//�f�X�g���N�^
	~Player() {};
	//�`��ȊO�̍X�V����������
	void Update();
	//�`��Ɋւ��邱�Ƃ���������
	void Draw()const;
};