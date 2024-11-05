#pragma once
#ifdef KURSPROJEKT_2_EXPORTS
#define KURSPROJEKT_2_API __declspec(dllexport)
#else
#define KURSPROJEKT_2_API __declspec(dllimport)
#endif
#include "transport.h"
#include <string>
KURSPROJEKT_2_API struct air : public transport
{
public:
	std::string name1{ "Воздушные" };
	air() { type = 2; }
};