#include "Grenade.h"
#include "Game.h"

Grenade::Grenade()
{
	TheTextureManager::Instance()->load("../Assets/textures/Grenade.png", "Grenade", TheGame::Instance()->getRenderer());

	glm::vec2 size = TheTextureManager::Instance()->getTextureSize("Grenade");
	setWidth(size.x);
	setHeight(size.y);
	setPosition(glm::vec2(100.0f, 100.0f));
}

Grenade::~Grenade()
{}

void Grenade::draw()
{
	int xComponent = getPosition().x;
	int yComponent = getPosition().y;

	TheTextureManager::Instance()->draw("Grenade", xComponent, yComponent, TheGame::Instance()->getRenderer(), 0.0f, 255, true);
}

void Grenade::update()
{

}

void Grenade::clean()
{

}