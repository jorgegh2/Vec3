#ifndef _HEADER_H_
#define _HEADER_H_
#include "math.h"

class vec3 {
private:
	int x, y, z;
public:
	vec3() {}
	vec3(const float x, const float y, const float z) : x(x), y(y), z(z) {}
	vec3(const vec3 &v1) : x(v1.x), y(v1.y), z(v1.z) {}

	vec3 operator+ (const vec3 &v1) const
	{
		return vec3 (x + v1.x, y + v1.y, z + v1.z);
	}

	vec3 operator- (const vec3 &v1) const
	{
		return vec3(x - v1.x, y - v1.y, z - v1.z);
	}

	vec3 operator+= (const vec3 &v1) 
	{
		x += v1.x;
		y += v1.y;
		z += v1.z;

		return *this;
	}

	vec3 operator-= (const vec3 &v1)
	{
		x -= v1.x;
		y -= v1.y;
		z -= v1.z;

		return *this;
	}

	vec3 operator= (const vec3 &v1)
	{
		x = v1.x;
		y = v1.y;
		z = v1.z;
	}

	const bool operator== (const vec3 &v1) const
	{
		return (x == v1.x, y == v1.y, z == v1.z);
	}

	void zero()
	{
		x = y = z = 0.0f;
	}

	const bool IsZero() const
	{
		return (x == 0.0f, y == 0.0f, z == 0.0f);
	}

	float distanceTo(const vec3 &v1) 
	{

	}

	void normalize(const vec3 &v1)
	{
		x = x / (sqrt(x*x + y * y + z * z));
		y = y / (sqrt(x*x + y * y + z * z));
		z = z / (sqrt(x*x + y * y + z * z));
	}

};

#endif // !HEADER_H_

