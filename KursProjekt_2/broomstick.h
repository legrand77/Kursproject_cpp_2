#pragma once
#include "spec.h"
#include "air.h" // �����
class broomstick : public air
{
public:
	KURSPROJEKT_2_API broomstick(double a, double x);
	KURSPROJEKT_2_API broomstick(double x) : broomstick(20, x) {};

};