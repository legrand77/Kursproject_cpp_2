#pragma once
#ifdef KURSPROJEKT_2_EXPORTS
#define KURSPROJEKT_2_API __declspec(dllexport)
#else
#define KURSPROJEKT_2_API __declspec(dllimport)
#endif
#include "air.h" // ковер самолет
 struct magicCarpet :public air {
 public:
	magicCarpet(int a, double x);
	magicCarpet(double x) : magicCarpet(10, x) {};
}; 