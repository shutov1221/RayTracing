#include "vec3.h"

#pragma once
class ray
{
public:
	ray(){}
	ray(const point3& origin, const vec3& direction);

	point3 origin() const;
	vec3 direction() const;

	point3 at(double t) const;

public:
	point3 orig;
	vec3 dir;
};



