#pragma once
#include "spec.h"
#include "transport.h"

class ground : public transport
{
protected:
	double DrivingTime{};// Время движения до отдыха
	double rest[3]{}; //Длительность отдыха

	KURSPROJEKT_2_API ground() { type = TransportType::Ground; }
};