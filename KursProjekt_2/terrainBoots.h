#pragma once
#include "spec.h"
#include "ground.h"

 class terrainBoots : public ground  // Ботинки-вездеходы
{ 
public:
	KURSPROJEKT_2_API terrainBoots(double a, double b, double c, double c1, double x);
	KURSPROJEKT_2_API terrainBoots(double x) : terrainBoots(6, 60, 10, 5, x) {}; // Передаем в конструктор Скорость, Время движения до отдыха, Длительность отдыха, Расстояние
};
