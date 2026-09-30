#pragma once

#include "Actor.h"
#include "Projectile.h" 
#include "Audio.h"

#define BASE_SHOOT_CADENCE 30	//Valor base del jugador 1 para la cadencia
#define BASE_MOVE_SPEED 3		//Valor base del jugador1 para la velocidad de movimiento

class Player : public Actor
{
public:
	Player(float x, float y, Game* game);
	Projectile* shoot();
	void update();
	void moveX(float axis);
	void moveY(float axis);
	int currentPlayer = 1; //Variable de control para evitar operaciones innecesarias
	void changePlayer(int player);
	Audio* audioShoot;
	int shootCadence = 30;
	int shootTime = 0;
	int moveSpeed = 3;
};
