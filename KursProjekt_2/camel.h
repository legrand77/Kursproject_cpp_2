#pragma once
#include "spec.h"
#include "ground.h"
class camel:public ground // Верблюд
{
public:
	KURSPROJEKT_2_API	camel(double a, double b, double c, double c1, double x);
	KURSPROJEKT_2_API	camel(double x) : camel(10, 30, 5, 8, x) {};
	 
};