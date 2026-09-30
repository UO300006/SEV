#pragma once

#include "Layer.h"
#include "Player.h"
#include "Background.h"
#include "NormalEnemy.h"
#include "HardEnemy.h"
#include "Projectile.h"
#include "Text.h"
#include "Coin.h"

#include "Audio.h" 

#include <list>

class GameLayer : public Layer
{
public:
	GameLayer(Game* game);
	void init() override;
	void processControls() override;
	void update() override;
	void draw() override;
	void keysToControls(SDL_Event event);

	Audio* audioBackground;
	Text* textPoints;
	int points;
	int newEnemyTime = 0;
	int newHardEnemyTime = 0;
	int newCoinTime = 0;

	Player* player;
	Background* background;
	Actor* backgroundPoints;
	bool controlShoot = false;
	int controlMoveY = 0;
	int controlMoveX = 0;

	list<Enemy*> enemies;
	list<Coin*> coins;
	list<Projectile*> projectiles;
};
