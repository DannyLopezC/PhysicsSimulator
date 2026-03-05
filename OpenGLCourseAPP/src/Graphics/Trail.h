#pragma once
#include "Mesh.h"

#pragma once
#include <vector>
#include <glm/glm.hpp>

class Trail
{
public:
	Trail(int maxPoints = 2000);

	void clear();
	void addPoint(const glm::vec2& p);
	void render() const;

	int getCount() const { return count; }

	~Trail();

private:
	int maxPoints = 0;
	int count = 0;

	GLuint VAO = 0;
	GLuint VBO = 0;

	std::vector<glm::vec2> points;

	void uploadAll();
};