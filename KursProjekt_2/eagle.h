#pragma once
#include "spec.h"
#include "air.h"
class eagle :public air {
 public:
	 KURSPROJEKT_2_API	eagle(double a, double x);
	 KURSPROJEKT_2_API	eagle(double x) : eagle(8, x) {};
};