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
double DrivingTime{};// ����� �������� �� ������
double rest[3]{}; //������������ ������

	std::string name1{ "��������" };
	KURSPROJEKT_2_API	ground() { type = 1; }
};