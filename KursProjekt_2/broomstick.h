#pragma once
#ifdef KURSPROJEKT_2_EXPORTS
#define KURSPROJEKT_2_API __declspec(dllexport)
#else
#define KURSPROJEKT_2_API __declspec(dllimport)
#endif
#include "air.h" // метла
 struct broomstick : public air {
 public:
	 KURSPROJEKT_2_API broomstick(int a, double x);

	 KURSPROJEKT_2_API broomstick(double x) : broomstick(20, x) {};



}; 