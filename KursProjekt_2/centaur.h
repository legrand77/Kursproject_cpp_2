#pragma once
#ifdef KURSPROJEKT_2_EXPORTS
#define KURSPROJEKT_2_API __declspec(dllexport)
#else
#define KURSPROJEKT_2_API __declspec(dllimport)
#endif
#include "ground.h"
 struct centaur : public ground // Кентавр
{
public:
	KURSPROJEKT_2_API	centaur(int a, double b, double c, double x);
	KURSPROJEKT_2_API	centaur(double x) : centaur(15, 8, 2, x) {};
};
