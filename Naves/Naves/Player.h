#pragma once

#include "Actor.h"
#include "Projectile.h" 
#include "Audio.h"

#define BASE_SHOOT_CADENCE 30
#define BASE_MOVE_SPEED 3

class Player : public Actor
{
public:
	Player(float x, float y, Game* game);
	Projectile* shoot();
	void update();
	void moveX(float axis);
	void moveY(float axis);
	void changePlayer();
	bool firstPlayer = true; //true a primer jugador, false segundo jugador
	Audio* audioShoot;
	int shootCadence = 30;
	int shootTime = 0;
	int moveSpeed = 3;
};
