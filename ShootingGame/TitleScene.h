#pragma once
#include"AbstractScene.h"

class Title :public AbstractScene {
public:

	int TitleImg;	//�摜�p�ϐ�
	int MenuNumber;	//�J�ڐ�擾�p�ϐ�
	int MenuY;		//�J�[�\���ړ��p�ϐ�


	Title();

	//�f�X�g���N�^
	virtual~Title() {};

	//�`��ȊO�̍X�V����������
	virtual AbstractScene* Update()override;

	//�`��Ɋւ��邱�Ƃ���������
	virtual void Draw()const override;
};