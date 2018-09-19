#ifndef _HEADER_H_
#define _HEADER_H_

class vec3 {
private:
	int x, y, z;
public:
	vec3();
	vec3(float a, float b, float c);
	vec3(float a, float b);

	vec3 operator+ (const vec3 &v1);

	vec3 operator- (const vec3 &v1);

	void operator+= (const vec3 &v1);

	void operator-= (const vec3 &v1);

	void operator= (const vec3 &v1);

	const bool operator== (const vec3 &v1);

	void zero();

	const bool IsZero();
};

#endif // !HEADER_H_

