#pragma once

#include "DisplayObject.h"
#include "TextureManager.h"

class Wookie : public DisplayObject
{
public:
	Wookie();
	~Wookie();

	void draw() override;
	void update() override;
	void clean() override;
};