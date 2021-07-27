#include "Hittable.h"

#include <memory>
#include <vector>

#pragma once
class Hittable_List : public Hittable
{
public:
	Hittable_List();
	Hittable_List(std::shared_ptr<Hittable> object);

	void clear();
	void add(std::shared_ptr<Hittable> object);

	virtual bool hit(const ray& r, double t_min, double t_max, hit_record& rec) const override;

public:
	std::vector<std::shared_ptr<Hittable>> objects;
};

