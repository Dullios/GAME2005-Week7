#pragma once
#include "DisplayObject.h"

class Grenade : public DisplayObject
{
public:
	Grenade();
	~Grenade();

	void draw() override;
	void update() override;
	void clean() override;
};