#pragma once

#include "Actor.h"
#include "Animation.h"

class Item : public Actor
{
public:
	Item(float x, float y, Game* game);
	void draw(float scrollX = 0, float scrollY = 0) override;
	void update();
	Animation* animation;
};

