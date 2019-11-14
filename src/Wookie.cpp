#include "Wookie.h"
#include "Game.h"

Wookie::Wookie()
{
	TheTextureManager::Instance()->load("../Assets/textures/Wookie.png", "Wookie", TheGame::Instance()->getRenderer());

	glm::vec2 size = TheTextureManager::Instance()->getTextureSize("Wookie");
	setWidth(size.x);
	setHeight(size.y);
	setPosition(glm::vec2(100.0f, 100.0f));
}

Wookie::~Wookie()
{}

void Wookie::draw()
{
	int xComponent = getPosition().x;
	int yComponent = getPosition().y;

	TheTextureManager::Instance()->draw("Wookie", xComponent, yComponent, TheGame::Instance()->getRenderer(), 0.0f, 255, true);
}

void Wookie::update()
{

}

void Wookie::clean()
{

}