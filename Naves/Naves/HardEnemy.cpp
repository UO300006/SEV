#include "HardEnemy.h"

HardEnemy::HardEnemy(float x, float y, Game* game)
	: Enemy(x, y, game, "res/enemigo_dificil.png", "res/enemigo_dificil_movimiento.png", 3) {
}

void HardEnemy::update() {
	// Actualizar la animación
	animation->update();

	vx = -1;
	x = x + vx;
	y = y + vx;
}