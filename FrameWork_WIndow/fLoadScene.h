#pragma once
#include "../FrameWork_SOURCE/fSceneManager.h"

#include "fPlayScene.h"
#include "fTitleScene.h"

namespace f
{
	void LoadScene()
	{
		SceneManager::CreateScene<TitleScene>(L"TitleScene");
		SceneManager::CreateScene<PlayScene>(L"PlayScene");
		//SceneManager::CreateScene<EndScene>(L"EndScene");

		SceneManager::LoadScene(L"PlayScene");
	}
}