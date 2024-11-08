#pragma once
#include "spec.h"
#include "air.h" // ковер самолет
class magicCarpet :public air {
 public:
	 KURSPROJEKT_2_API magicCarpet(double a, double x);
	 KURSPROJEKT_2_API magicCarpet(double x) : magicCarpet(10, x) {};
}; 