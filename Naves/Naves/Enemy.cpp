#include "Enemy.h"

Enemy::Enemy(float x, float y, Game* game, string filename, string animationFile, int lifes)
	: Actor(filename, x, y, 36, 40, game) {

	vx = 1;

	aMoving = new Animation(animationFile, width, height,
		108, 40, 6, 3, game);
	animation = aMoving;
	this->lifes = lifes;
}


void Enemy::update() {
	// Actualizar la animación
	animation->update();

	vx = -1;
	x = x + vx;
}

void Enemy::draw() {
	animation->draw(x, y);
}

void Enemy::hit() {
	lifes--;
}

bool Enemy::isDead() {
	return lifes <= 0;
}