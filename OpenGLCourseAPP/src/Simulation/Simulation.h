#pragma once
#include "glm/glm.hpp"
#include "Simulation/Ball.h"
#include "Simulation/SimulationConfig.h"
#include "Simulation/Rocket2D.h"

class Simulation
{
public:
	Simulation();

	void update(float dt);
	void restart();

	float getRocketWidth() const { return rocket.getWidth(); }
	float getRocketHeight() const { return rocket.getHeight(); }
	float getRocketAngle() const { return rocket.getAngle(); }
	glm::vec2 getRocketPos() const { return rocket.getPos(); }
	glm::vec2 getRocketVel() const { return rocket.getVel(); }

	float getWallX() const { return config.wallX; }
	float getFloorOffset() const { return config.floorOffset; }

	~Simulation();
private:

	void bounceOnFloor();
	void bounceOnWall();
	void stopMotionOnFloorImpact();

	void applyMotion(glm::vec2 acc, float dt);
	glm::vec2 calcThrustVec();

	Rocket2D rocket;
	SimulationConfig config;

	bool simulationEnded = false;
};

