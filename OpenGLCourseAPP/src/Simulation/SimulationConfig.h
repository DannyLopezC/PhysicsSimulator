#pragma once
#include <glm/glm.hpp>

struct SimulationConfig
{
	float PI = 3.14159265358979f;
	float gravity = 10;

	glm::vec2 startPos = { -8.0f, 1.0f };
	glm::vec2 startVel = { 0.0f, 0.0f };
	glm::vec2 startAcc = { 0.0f, 0.0f };

	float angle = 80.0f;     // degrees
	float mass = 1.0f;       // kg
	float thrust = 20.0f;    // motor force
	float burnTime = 1.0f;   // push seconds
	
	float floorTopY = 0.0f;
	float floorOffset = 9.0;
	float wallX = 8.0f;

	float restitution = 0.5f;
	float dragCoefficient = 0.0f;
};