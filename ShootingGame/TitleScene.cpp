#include"DxLib.h"
#include"TitleScene.h"
#include"InputKey.h"
#include"GameMainScene.h"

//�R���X�g���N�^
Title::Title() {
	//�^�C�g���摜�f�[�^�̓ǂݍ���
	/*TitleImg = LoadGraph("images/Title.bmp");*/

	//������
	MenuNumber = 0;
	MenuY = 0;
}

AbstractScene* Title::Update() {
	//���j���[�J�[�\���ړ�����
	//if (InputKey::KeyFlg & PAD_INPUT_DOWN) {
	//	if (++MenuNumber > 2) MenuNumber = 0;
	//}
	//if (InputKey::KeyFlg & PAD_INPUT_UP) {
	//	if (--MenuNumber < 0) MenuNumber = 2;	
	//}
	if (InputKey::KeyFlg & PAD_INPUT_1) {
		return new GameMainScene;
	}
	//���j���[�J�[�\���i�O�p�`�j�̌v�Z
	//MenuY = MenuNumber * 52;

	// �y�L�[�Ń��j���[�I��
	//if (InputKey::KeyFlg & PAD_INPUT_A) {
		//switch (MenuNumber) {
		//case 0:
		//	break;
		//case 1:
		//	break;
		//}
	//};	
	return this;
}

void Title::Draw()const {
	//�^�C�g���摜�\��
	//DrawGraph(0, 0, TitleImg, FALSE);

	DrawString(0, 0, "TitleScene     A�ŃQ�[�����C��",GetColor(255, 255, 255), TRUE);
	//���j���[�J�[�\���i�O�p�`�j�̕\��
	//DrawTriangle(240, 255 + MenuY, 260, 270 + MenuY, 240, 285 + MenuY, GetColor(255, 0, 0), TRUE);

}