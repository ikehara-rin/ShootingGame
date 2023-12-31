#include"InputKey.h"
#include"DxLib.h"

int InputKey::OldKey;
int InputKey::NowKey;
int InputKey::KeyFlg;
int InputKey::InputX;
int InputKey::InputY;

void InputKey :: UpdateKey() {
	// 入力キー取得
	OldKey = NowKey;
	NowKey = GetJoypadInputState(DX_INPUT_KEY_PAD1);
	KeyFlg = NowKey & ~OldKey;

	GetJoypadAnalogInput(&InputX, &InputY, DX_INPUT_KEY_PAD1);
}