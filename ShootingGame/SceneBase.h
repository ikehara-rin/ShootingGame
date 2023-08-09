#pragma once
#include "AbstractScene.h"

//�V�[���}�l�[�W���[�N���X
//�e�V�[���̐؂�ւ����Ǘ�����B
class SceneBase :public AbstractScene {
private:
	AbstractScene* mScene;	//���݂̃V�[��

public:
	//�R���X�g���N�^
	SceneBase(AbstractScene* scene): mScene(scene) {}

	//�f�X�g���N�^
	~SceneBase() {
		delete mScene;
	}

	//�`��ȊO�̍X�V����������
	AbstractScene* Update()override;

	//�`��Ɋւ��邱�Ƃ���������
	void Draw()const override;
};