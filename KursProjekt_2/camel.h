#pragma once
#ifdef KURSPROJEKT_2_EXPORTS
#define KURSPROJEKT_2_API __declspec(dllexport)
#else
#define KURSPROJEKT_2_API __declspec(dllimport)
#endif
#include "ground.h"
 struct camel :public ground // Верблюд
{
public:
	KURSPROJEKT_2_API	camel(int a, double b, double c, double c1, double x);
	KURSPROJEKT_2_API	camel(double x) : camel(10, 30, 5, 8, x) {};
};