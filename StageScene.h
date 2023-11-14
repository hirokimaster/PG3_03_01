#pragma once
#include "IScene.h"
#include "Enemy.h"
#include "Player.h"

class StageScene : public IScene {
public:

	void Initialize() override;

	void Update() override;

	void Draw() override;

private:

    std::unique_ptr<Player> player_;
	std::unique_ptr<Enemy> enemy_;
};
