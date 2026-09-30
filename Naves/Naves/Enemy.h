#pragma once

#include "Actor.h"
#include "Animation.h" 

class Enemy : public Actor
{
public:
	Enemy(float x, float y, Game* game, string filename, string animationFile, int lifes);
	void draw() override; // Va a sobrescribir
	virtual void update();
	void hit();
	bool isDead();
	int lifes = 1;
	Animation* aMoving;
	Animation* animation; // Referencia a la animación mostrada
};
