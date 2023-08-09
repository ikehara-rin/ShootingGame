#include "SceneBase.h"

AbstractScene* SceneBase::Update() {
	AbstractScene* p = mScene->Update();
	if (p != mScene) {
		delete mScene;
		mScene = p;
	}

	return p;
}
void SceneBase::Draw()const {
	mScene->Draw();
}