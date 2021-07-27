#include "rtweekend.h"

#pragma once
class Camera
{
public:
	Camera();

	ray get_ray(double u, double v) const;

private:
	point3 origin;
	point3 lower_left_corner;
	vec3 horizontal;
	vec3 vertical;
};

