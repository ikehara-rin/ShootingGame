#include"InputKey.h"
#include"DxLib.h"

int InputKey::OldKey;
int InputKey::NowKey;
int InputKey::KeyFlg;

void InputKey :: UpdateKey() {
	// “ü—ÍƒL[æ“¾
	OldKey = NowKey;
	NowKey = GetJoypadInputState(DX_INPUT_KEY_PAD1);
	KeyFlg = NowKey & ~OldKey;


}