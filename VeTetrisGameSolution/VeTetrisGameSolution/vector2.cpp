#include <math.h>

#include "Vector2.h"

Vector2::Vector2()
	: x(0.0f)
	, y(0.0f)
{
}

Vector2::Vector2(float initX, float initY)
	: x(initX)
	, y(initY)
{
}

float Vector2::magnitude()
{
	return sqrtf(x*x + y*y);
}
