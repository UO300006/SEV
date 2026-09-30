#include "NormalEnemy.h"


NormalEnemy::NormalEnemy(float x, float y, Game* game)
	: Enemy(x, y, game, "res/enemigo.png", "res/enemigo_movimiento.png", 1) {
}