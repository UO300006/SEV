#include "DisappearingTile.h"

DisappearingTile::DisappearingTile(float x, float y, Game* game)
	: Tile("res/bloque_tierra_desgastado.png", x, y, game) {}

void DisappearingTile::trigger() {
	if (!triggered) {            // solo la primera vez
		triggered = true;
		timer = TIME_TO_DISAPPEAR;
	}
}

void DisappearingTile::update() {
	if (triggered && timer > 0) timer--;
}

bool DisappearingTile::isGone() {
	return triggered && timer <= 0;
}

void DisappearingTile::draw(float scrollX, float scrollY) {
	// parpadea en los últimos frames como aviso
	if (triggered && timer < 25 && (timer / 3) % 2 == 0) return;
	Actor::draw(scrollX, scrollY);
}