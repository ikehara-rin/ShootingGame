#include"DxLib.h"
#include"Player.h"
#include"InputKey.h"

Player::Player() {
	PlayerX = 0;
	PlayerY = 355;
	PlayerXX = 0;
	PlayerYY = 0;
}

void Player::Update() {
	Move();
}

void Player::Draw() const {
	DrawBox(PlayerX, PlayerY, PlayerX+32, PlayerY+32, GetColor(255, 255, 255), TRUE);
}

void Player::Move() {

	PlayerXX = PlayerX+32;
	PlayerYY = PlayerY+32;

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

	if (PlayerX < 0) {
		PlayerX = 0;
	}

	if (PlayerXX > /*1280*/640) {
		PlayerX = /*1248*/608;
	}

	if (PlayerY < 0) {
		PlayerY = 0;
	}

	if (PlayerYY > /*720*/480) {
		PlayerY = /*688*/448;
	}
}