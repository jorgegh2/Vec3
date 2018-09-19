#include "Header.h"

vec3::vec3() {
	x = 0;
	y = 0;
	z = 0;
}

vec3::vec3(float a, float b, float c) {
	x = a;
	y = b;
	z = c;
}

vec3::vec3(float a, float b) {
	x = a;
	y = b;
	z = 0;
}

vec3 vec3::operator+  (const vec3 &v1) {
	vec3 res;

	res.x = x + v1.x;
	res.y = y + v1.y;
	res.z = z + v1.z;

	return res;
}

vec3 vec3::operator- (const vec3 &v1) {
	vec3 res;

	res.x = x - v1.x;
	res.y = y - v1.y;
	res.z = z - v1.z;

	return res;
}

void vec3::operator+= (const vec3 &v1) {

	x += v1.x;
	y += v1.y;
	z += v1.z;
}

void vec3::operator-= (const vec3 &v1) {

	x -= v1.x;
	y -= v1.y;
	z -= v1.z;
}

void vec3::operator= (const vec3 &v1) {

	x = v1.x;
	y = v1.y;
	z = v1.z;
}

const bool vec3::operator==(const vec3 &v1) {

	if (x == v1.x, y = v1.y, z += v1.z) return true;
	else return false;

}

void vec3::zero() {
	x = 0;
	y = 0;
	z = 0;
}

const bool vec3::IsZero() {
	if (x = 0, y = 0, z = 0) return true;
	else return false;
}
