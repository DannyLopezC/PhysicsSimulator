#pragma once
#include <glm/glm.hpp>

class Rocket2D
{
public:
	Rocket2D();
	Rocket2D(glm::vec2 startPos, glm::vec2 startVel, glm::vec2 startAcc, float startAngle,
		float startMass, float startThrust, float startBurnTime, float width, float height);

	void restart(glm::vec2 startPos, glm::vec2 startVel, float startBurnTime);

	// Position
	glm::vec2 getPos() const { return pos; }
	void setXPos(float value) { pos.x = value; }
	void setYPos(float value) { pos.y = value; }
	void setPos(glm::vec2 value) { pos = value; }

	// Velocity
	glm::vec2 getVel() const { return vel; }
	void setXVel(float value) { vel.x = value; }
	void setYVel(float value) { vel.y = value; }
	void setVel(glm::vec2 value) { vel = value; }

	// Acceleration
	glm::vec2 getAcc() const { return acc; }
	void setXAcc(float value) { acc.x = value; }
	void setYAcc(float value) { acc.y = value; }
	void setAcc(glm::vec2 value) { acc = value; }

	// Angle
	float getAngle() const { return angle; }
	void setAngle(float value) { angle = value; }

	// Mass
	float getMass() const { return mass; }
	void setMass(float value) { mass = value; }

	// Thrust
	float getThrust() const { return thrust; }
	void setThrust(float value) { thrust = value; }

	// Burn Time
	float getBurnTime() const { return burnTime; }
	void setBurnTime(float value) { burnTime = value; }

	// Size
	float getWidth() const { return width; }
	void setWidth(float value) { width = value; }

	float getHeight() const { return height; }
	void setHeight(float value) { height = value; }

	~Rocket2D();

private:
	glm::vec2 pos;
	glm::vec2 vel;
	glm::vec2 acc;
	float angle;
	float mass;
	float thrust;
	float burnTime;
	
	float width;
	float height;
};

