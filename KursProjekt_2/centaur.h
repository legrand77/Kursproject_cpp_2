#pragma once
#include "spec.h"
#include "ground.h"
class centaur : public ground // Кентавр
{
public:
	KURSPROJEKT_2_API	centaur(double a, double b, double c, double x);
	KURSPROJEKT_2_API	centaur(double x) : centaur(15, 8, 2, x) {};

};
