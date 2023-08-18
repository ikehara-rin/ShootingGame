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
	//デストラクタ
	~Player() {};
	//描画以外の更新を実装する
	void Update();
	//描画に関することを実装する
	void Draw()const;
};