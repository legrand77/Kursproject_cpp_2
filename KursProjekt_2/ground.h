#pragma once
#include "spec.h"
#include "transport.h"

class ground : public transport
{
protected:
	double DrivingTime{};// ����� �������� �� ������
	double rest[3]{}; //������������ ������

	KURSPROJEKT_2_API ground() { type = TransportType::Ground; }
};