#pragma once
#include "IScene.h"
class ClearScene : public IScene {
public:

	void Initialize() override;

	void Update() override;

	void Draw() override;

private:
	char keys[256] = {0};
	char preKeys[256] = {0};
	Vector2 position = {};
};
