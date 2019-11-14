#include "Troopers.h"
#include "Game.h"

Troopers::Troopers()
{
	TheTextureManager::Instance()->load("../Assets/textures/Troopers.png", "Troopers", TheGame::Instance()->getRenderer());

	glm::vec2 size = TheTextureManager::Instance()->getTextureSize("Troopers");
	setWidth(size.x);
	setHeight(size.y);
	setPosition(glm::vec2(600.0f, 100.0f));
}

Troopers::~Troopers()
{
}

void Troopers::draw()
{
	int xComponent = getPosition().x;
	int yComponent = getPosition().y;

	TheTextureManager::Instance()->draw("Troopers", xComponent, yComponent, TheGame::Instance()->getRenderer(), 0.0f, 255, true);
}

void Troopers::update()
{

}

void Troopers::clean()
{

}