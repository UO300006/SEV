#include "Player.h"

Player::Player(float x, float y, Game* game)
	: Actor("res/jugador.png", x, y, 50, 57, game) {
	audioShoot = Audio::createAudio("res/efecto_disparo.wav", false);
}

void Player::update() {
	if (shootTime > 0) {
		shootTime--;
	}
	x = x + vx;
	y = y + vy;
}

void Player::moveX(float axis) {
	vx = axis * moveSpeed;
}

void Player::moveY(float axis) {
	vy = axis * moveSpeed;
}

Projectile* Player::shoot() {
	if (shootTime == 0) {
		audioShoot->play();
		shootTime = shootCadence;
		return new Projectile(x, y, game);
	}
	else {
		return NULL;
	}

}

void Player::changePlayer() {
	if (firstPlayer) {
		changeTexture("res/jugador2.png");
		shootCadence = BASE_SHOOT_CADENCE/3;
		moveSpeed = BASE_MOVE_SPEED*2;
	}
	else {
		changeTexture("res/jugador.png");
		shootCadence = BASE_SHOOT_CADENCE;
		moveSpeed = BASE_MOVE_SPEED;
	}
	firstPlayer = !firstPlayer;
}



