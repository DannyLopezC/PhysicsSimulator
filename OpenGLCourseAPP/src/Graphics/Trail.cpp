#include "Trail.h"

Trail::Trail(int maxPoints) : maxPoints(maxPoints), count(0)
{
	points.reserve(maxPoints);

	glGenVertexArrays(1, &VAO);
	glGenBuffers(1, &VBO);

	glBindVertexArray(VAO);
	glBindBuffer(GL_ARRAY_BUFFER, VBO);

		// reserves memory on gpu
		glBufferData(GL_ARRAY_BUFFER, sizeof(glm::vec2) * maxPoints, nullptr, GL_DYNAMIC_DRAW);

		glEnableVertexAttribArray(0);
		glVertexAttribPointer(0, 2,	GL_FLOAT, GL_FALSE, sizeof(glm::vec2), (void*)0);

	glBindBuffer(GL_ARRAY_BUFFER, 0);
	glBindVertexArray(0);
}

void Trail::clear()
{
	points.clear();
	count = 0;
}

void Trail::addPoint(const glm::vec2& p)
{
	// avoid duplicates
	if (!points.empty()) 
	{
		glm::vec2 last = points.back();
		if (glm::length(p - last) < 0.001f)return;
	}

	if (count < maxPoints)
	{
		points.push_back(p);
		count++;

		// update only last point

		glBindBuffer(GL_ARRAY_BUFFER, VBO);
			glBufferSubData(GL_ARRAY_BUFFER, sizeof(glm::vec2) * (count - 1), sizeof(glm::vec2), &points.back());
		glBindBuffer(GL_ARRAY_BUFFER, 0);
	}
	else
	{
		clear();
		points.push_back(p);
		count = 1;
		uploadAll();
	}
}

void Trail::render() const
{
	if (count < 2) return;

	glBindVertexArray(VAO);
		glDrawArrays(GL_LINE_STRIP, 0, count);
	glBindVertexArray(0);
}

void Trail::uploadAll()
{
	glBindBuffer(GL_ARRAY_BUFFER, VBO);
		glBufferSubData(GL_ARRAY_BUFFER, 0, sizeof(glm::vec2) * count, points.data());
	glBindBuffer(GL_ARRAY_BUFFER, 0);
}

Trail::~Trail()
{
	if (VBO) glDeleteBuffers(1, &VBO);
	if (VAO) glDeleteVertexArrays(1, &VAO);
}