#pragma once

#include "DisplayObject.h"

class Troopers : public DisplayObject
{
public:
	Troopers();
	~Troopers();

	void draw() override;
	void update() override;
	void clean() override;
};