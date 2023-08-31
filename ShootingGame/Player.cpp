#include"DxLib.h"
#include"Player.h"
#include"InputKey.h"
#include"GameMainScene.h"
#include"BulletSpawner.h"

Player::Player() {
	PlayerX = 10;
	PlayerY = 355;
}

void Player::Update() {
	Move();
}

void Player::Draw()const {
	DrawCircle(PlayerX, PlayerY, 10, GetColor(255, 255, 255), TRUE);
}

void Player::Hit() {

}

void Player::Move() {

	if (InputKey::InputX > 0) {
		PlayerX = PlayerX + 5;
	}
	else if (InputKey::InputX < 0) {
		PlayerX = PlayerX - 5;
	}

	if (InputKey::InputY > 0) {
		PlayerY = PlayerY + 5;
	}
	else if (InputKey::InputY < 0) {
		PlayerY = PlayerY - 5;
	}

	if (PlayerX < 10) {
		PlayerX = 10;
	}

	if (PlayerX > 1270) {
		PlayerX = 1270;
	}

	if (PlayerY < 10) {
		PlayerY = 10;
	}

	if (PlayerY > 710) {
		PlayerY = 710;
	}
}