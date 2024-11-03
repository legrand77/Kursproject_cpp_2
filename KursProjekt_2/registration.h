#pragma once
#include "transport.h"
#ifdef KURSPROJEKT_2_EXPORTS
#define KURSPROJEKT_2_API __declspec(dllexport)
#else
#define KURSPROJEKT_2_API __declspec(dllimport)
#endif
struct registration { // класс регистрации транспортных средств
public:
	transport registrationList[8];
};