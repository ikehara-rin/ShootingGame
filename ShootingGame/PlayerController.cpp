#include"DxLib.h"
#include"PlayerController.h"
#include"InputKey.h"

int PlayerController::PlayerX;
int PlayerController::PlayerY;

PlayerController::PlayerController() {
	PlayerX = 0;
	PlayerY = 355;
}
void PlayerController::Input() {
	if (InputKey::InputX > 0) {
		PlayerX = PlayerX + 2;
	}
	else if (InputKey::InputX < 0) {
		PlayerX = PlayerX - 2;
	}
	if (InputKey::InputY > 0) {
		PlayerY = PlayerY + 2;
	}
	else if (InputKey::InputY < 0) {
		PlayerY = PlayerY - 2;
	}
}