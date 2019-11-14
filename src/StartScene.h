#pragma once
#ifndef __START_SCENE__
#define __START_SCENE__

#include <cmath>
#include "Scene.h"
#include "Label.h"
#include "ship.h"
#include "Wookie.h"
#include "Grenade.h"
#include "Troopers.h"

class StartScene : public Scene
{
public:
	StartScene();
	~StartScene();

	// Inherited via Scene
	virtual void draw() override;
	virtual void update() override;
	virtual void clean() override;
	virtual void handleEvents() override;
	virtual void start() override;

private:
	/*Label* m_pStartLabel;
	Label* m_pInstructionsLabel;*/

	Wookie* m_pWookie;
	Troopers* m_pTroopers;
	Grenade* m_pGrenade;
	
	SDL_Rect* m_ground;

	bool m_hasLanded = false;

	glm::vec2 m_mousePosition;

	// ImGui utility functions
	void m_ImGuiKeyMap();
	void m_ImGuiSetStyle();
	void m_updateUI();

	// ImGui menu variables
	bool m_exitApp = false;
	bool m_displayAbout = false;
	bool m_displayUI = true;

	// Physics Variables
	const float deg2rad = 0.0174532925f;
	const float rad2deg = 57.295779513f;
	bool m_isGravityEnabled = false;
	bool m_hasBackWind = false;
	float m_gravity = 9.8f;
	float m_PPM = 10; // Pixels Per Meter

	float m_angle = 14.67f;

	glm::vec2 m_position = glm::vec2(0.0f, 0.0f);
	float m_range = 500.0f;
	float m_velocity = 100.0f;
	float m_velocityX = 0.0f;
	float m_velocityY = 0.0f;
	glm::vec2 m_acceleration = glm::vec2(0.0f, 0.0f);

	float m_time = 0.016667f;	// Approximately 16ms
	float m_aTime = 0.016667f;	// Accumulated time

	// Physics Functions
	void m_Move();
};

#endif /* defined (__START_SCENE__) */