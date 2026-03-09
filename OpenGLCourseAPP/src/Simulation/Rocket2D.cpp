#include "Rocket2D.h"

Rocket2D::Rocket2D()
{
	pos = { 0.0f, 2.0f };
	vel = { 0.0f, 0.0f };
	acc = { 0.0f, 0.0f };

	angle = 45.0f;
	mass = 1.0f;
	thrust = 20.0f;
	burnTime = 1.5f;

	width = 0.2f;
	height = 0.6f;
}

Rocket2D::Rocket2D(glm::vec2 startPos, glm::vec2 startVel, glm::vec2 startAcc, float startAngle,
	float startMass, float startThrust, float startBurnTime, float startWidth, float startHeight)
{
	pos = startPos;
	vel = startVel;
	acc = startAcc;
	angle = startAngle;
	mass = startMass;
	thrust = startThrust;
	burnTime = startBurnTime;
	width = startWidth;
	height = startHeight;
}

void Rocket2D::restart(glm::vec2 startPos, glm::vec2 startVel, float startBurnTime) 
{
	this->pos = startPos;
	this->vel = startVel;
	this->burnTime = startBurnTime;
}

Rocket2D::~Rocket2D()
{
}
