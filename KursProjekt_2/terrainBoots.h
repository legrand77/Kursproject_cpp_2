#pragma once
#ifdef KURSPROJEKT_2_EXPORTS
#define KURSPROJEKT_2_API __declspec(dllexport)
#else
#define KURSPROJEKT_2_API __declspec(dllimport)
#endif
#include "ground.h"

 struct terrainBoots : public ground  // Ботинки-вездеходы
{ 
public:
	KURSPROJEKT_2_API terrainBoots(int a, double b, double c, double c1, double x);
	KURSPROJEKT_2_API terrainBoots(double x) : terrainBoots(6, 60, 10, 5, x) {}; // Передаем в конструктор Скорость, Время движения до отдыха, Длительность отдыха, Расстояние

};
