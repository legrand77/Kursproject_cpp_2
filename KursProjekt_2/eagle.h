#pragma once
#ifdef KURSPROJEKT_2_EXPORTS
#define KURSPROJEKT_2_API __declspec(dllexport)
#else
#define KURSPROJEKT_2_API __declspec(dllimport)
#endif
#include "air.h"
 struct eagle :public air {
 public:
	 KURSPROJEKT_2_API	eagle(int a, double x);
	 KURSPROJEKT_2_API	eagle(double x) : eagle(8, x) {};
};