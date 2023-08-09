#pragma once
#include"AbstractScene.h"

class Title :public AbstractScene {
public:

	int TitleImg;	//画像用変数
	int MenuNumber;	//遷移先取得用変数
	int MenuY;		//カーソル移動用変数


	Title();

	//デストラクタ
	virtual~Title() {};

	//描画以外の更新を実装する
	virtual AbstractScene* Update()override;

	//描画に関することを実装する
	virtual void Draw()const override;
};