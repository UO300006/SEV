#include "HardEnemy.h"

#include <cmath>

HardEnemy::HardEnemy(float x, float y, Game* game)
	: Enemy(x, y, game, "res/enemigo_dificil.png", "res/enemigo_dificil_movimiento.png", 3) {
}

void HardEnemy::update() {
	// Actualizar la animación
	animation->update();

	// Velocidad horizontal constante
	vx = -2.0f;

	// Movimiento horizontal
	x += vx;

	// Movimiento vertical sinusoidal
	static float time = 0.0f;
	time += 0.08f;

	y += std::sin(time) * 1.5f;
}