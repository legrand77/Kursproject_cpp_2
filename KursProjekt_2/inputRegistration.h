#pragma once
#ifdef KURSPROJEKT_2_EXPORTS
#define KURSPROJEKT_2_API __declspec(dllexport)
#else
#define KURSPROJEKT_2_API __declspec(dllimport)
#endif
#include "registration.h"
void inputRegistration(int type, int typeTransport, int pathLength, registration* e); // заполнение листа регистрации