#include "Hittable.h"

#pragma once
class sphere : public Hittable 
{
public:
	sphere() {}
	sphere(point3 cen, double r);

	virtual bool hit(const ray& r, double t_min, double t_max, hit_record& rec) const override;

public:
	point3 center;
	double radius;
};

