#pragma once
#ifdef KURSPROJEKT_2_EXPORTS
#define KURSPROJEKT_2_API __declspec(dllexport)
#else
#define KURSPROJEKT_2_API __declspec(dllimport)
#endif
#include "transport.h"

 struct ground : public transport
{
public:
double DrivingTime{};// Время движения до отдыха
double rest[3]{}; //Длительность отдыха

	std::string name1{ "Наземные" };
	KURSPROJEKT_2_API	ground() { type = 1; }
};