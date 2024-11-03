#pragma once
#include <string>
#ifdef KURSPROJEKT_2_EXPORTS
#define KURSPROJEKT_2_API __declspec(dllexport)
#else
#define KURSPROJEKT_2_API __declspec(dllimport)
#endif

struct transport {

public:
	int speed{}; // скорость
	double way{};// путь
	double  time;// время
	std::string name{"Транспорт"};
	int status{};
	int type{};
};