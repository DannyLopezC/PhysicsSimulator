#pragma once
#include "glm/glm.hpp"

class Simulation
{
public:
	Simulation();

	static constexpr float gravity = 10;
	static constexpr glm::vec2 throwerPos = { 0.0f, 2.0f };
	static constexpr glm::vec2 v0 = { 10.0f, 10.0f };
	static constexpr float floorTopY = 0.0f;
	static constexpr float wallX = 4.0f;
	static constexpr float restitution = 1.0;
	static constexpr float floorOffset = 9.0;

	~Simulation();
};

