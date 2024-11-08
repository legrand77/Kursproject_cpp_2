#pragma once
#include "spec.h"
#include "ground.h"
class camelFast : public ground  // Верблюд-быстроход
{
public:
	KURSPROJEKT_2_API	camelFast(double a, double b, double c, double c1, double c2, double x);

	KURSPROJEKT_2_API	camelFast(double x) : camelFast(40, 10, 5, 6.5, 8, x) {};

};
