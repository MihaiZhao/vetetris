#ifndef VECTOR2_H
#define VECTOR2_H

class Vector2
{
private:

public:
	float x;
	float y;

	// Constructors
	Vector2();
	Vector2(float initX, float initY);

	// Destructor
	~Vector2() {};

	// Operator overloads
	Vector2 operator+(const Vector2 &other)
	{
		Vector2 ans;
		ans.x = x + other.x;
		ans.y = y + other.y;
		return ans;
	}

	Vector2 operator-(const Vector2 &other)
	{
		Vector2 ans;
		ans.x = x - other.x;
		ans.y = y - other.y;
		return ans;
	}

	Vector2 operator*(float f)
	{
		Vector2 ans;
		ans.x = x * f;
		ans.y = y * f;
		return ans;
	}

	Vector2 operator/(float f)
	{
		Vector2 ans;
		ans.x = x / f;
		ans.y = y / f;
		return ans;
	}

	Vector2& operator+=(Vector2 const& other)
	{
		x += other.x;
		y += other.y;
		return *this;
	}

	Vector2& operator-=(Vector2 const& other)
	{
		x -= other.x;
		y -= other.y;
		return *this;
	}

	Vector2& operator*=(float f)
	{
		x *= f;
		y *= f;
		return *this;
	}

	Vector2& operator/=(float f)
	{
		x /= f;
		y /= f;
		return *this;
	}

	// Other Functions
	float magnitude();
};


#endif