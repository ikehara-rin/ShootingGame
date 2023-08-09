#pragma once
#include "AbstractScene.h"

//シーンマネージャークラス
//各シーンの切り替えを管理する。
class SceneBase :public AbstractScene {
private:
	AbstractScene* mScene;	//現在のシーン

public:
	//コンストラクタ
	SceneBase(AbstractScene* scene): mScene(scene) {}

	//デストラクタ
	~SceneBase() {
		delete mScene;
	}

	//描画以外の更新を実装する
	AbstractScene* Update()override;

	//描画に関することを実装する
	void Draw()const override;
};