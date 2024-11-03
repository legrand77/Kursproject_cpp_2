#pragma once
#ifdef KURSPROJEKT_2_EXPORTS
#define KURSPROJEKT_2_API __declspec(dllexport)
#else
#define KURSPROJEKT_2_API __declspec(dllimport)
#endif
#include "ground.h"
 struct camelFast : public ground  // Верблюд-быстроход
{
public:
	camelFast(int a, double b, double c, double c1, double c2, double x);

	camelFast(double x) : camelFast(40, 10, 5, 6.5, 8, x) {};
};
