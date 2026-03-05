#include "Ball.h"

Ball::Ball(glm::vec2 startPos, glm::vec2 startVel, float r) : startPos(startPos), startVel(startVel)
{
	restart();
	radius = r;
}

void Ball::update(float dt, float gravity)
{
	vel.y -= gravity * dt;
	pos += vel * dt;
}

void Ball::bounceOnFloor(float floorY, float restitution)
{
	if (pos.y - radius <= floorY)
	{
		pos.y = floorY + radius;
		vel.y = -vel.y * restitution;

		if (std::abs(vel.y) < 0.05f) vel.y = 0.0f;

		std::cout << pos.x << std::endl;
		hasBounced = true;
	}
}

void Ball::bounceOnWall(float wallX, float restitution)
{
	if (pos.x + radius >= wallX) {
		pos.x = wallX - radius;
		vel.x = -vel.x * restitution;

		if (std::abs(vel.x) < 0.05f) vel.x = 0.0f;
	}
}

void Ball::restart()
{
	pos = startPos;
	vel = startVel;
	hasBounced = false;
}

Ball::~Ball()
{
}