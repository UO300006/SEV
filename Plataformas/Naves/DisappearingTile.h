#pragma once
#include "Tile.h"

class DisappearingTile : public Tile {
public:
	DisappearingTile(float x, float y, Game* game);
	void draw(float scrollX = 0, float scrollY = 0) override;
	void update();
	void trigger();      // el jugador lo ha pisado
	bool isGone();

	bool triggered = false;
	int timer = 0;
	static const int TIME_TO_DISAPPEAR = 60; // frames, ajusta a tu FPS
};