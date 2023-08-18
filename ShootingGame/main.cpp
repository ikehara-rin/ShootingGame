#include"SceneManager.h"
//#include"TitleScene.h"
#include"DxLib.h"
#include"InputKey.h"
#include"GameMainScene.h"

int WINAPI WinMain(_In_ HINSTANCE hInstance, _In_opt_ HINSTANCE hPrevInstance, _In_ LPSTR lpCmdLine, _In_ int nCmdShow)
{
	// �^�C�g���� test �ɕύX
	SetMainWindowText("test");

	//�E�B���h�E���[�h�ŋN��
	ChangeWindowMode(TRUE);
	
	SetWindowSize(1280, 720);

	//DX���C�u�����̏���������
	if (DxLib_Init() == -1) return -1;

	SceneManager sceneMng(dynamic_cast<AbstractScene*>(new GameMain()));

	SetDrawScreen(DX_SCREEN_BACK);	// �`����ʂ𗠂ɂ���

	SetFontSize(20);		// �����T�C�Y��ݒ�

	while (ProcessMessage() == 0) {

		ClearDrawScreen();		// ��ʂ̏�����

		InputKey::UpdateKey();	//�L�[���͎擾���X�V

		sceneMng.Update();		//�V�[���X�V
		sceneMng.Draw();		//�V�[���`��

		ScreenFlip();			// ����ʂ̓��e��\��ʂɔ��f

	}

	DxLib_End();	// DX���C�u�����g�p�̏I������

	return 0;
}