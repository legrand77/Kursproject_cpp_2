#pragma once
#include <string>
#include "spec.h"
 enum class TransportType
{
	Ground=1,
	Air
};
 class transport
{
  protected:
	double speed{}; // скорость
	double way{};// путь
	double  time{};// время
	std::string name{ "Транспорт" };
	int status{};
	TransportType type{};
  public:
	KURSPROJEKT_2_API	TransportType getType()  { return type; }
	KURSPROJEKT_2_API	int getStatus()  { return status; }
	KURSPROJEKT_2_API	void setStatus(int a) { status = a; }
	KURSPROJEKT_2_API	std::string getName() { return name; }
	KURSPROJEKT_2_API   double  getTime()  {  return time; }

	//KURSPROJEKT_2_API virtual const char* getName() const = 0;       //  название транспорта, для отображения в таблице результатов
	 // TransportType getType()  { return TransportType::Air; };     //тип, чтобы выбирать в какой гонке будет участвовать
	//KURSPROJEKT_2_API virtual double calcTimeRide(int distance) const = 0; //расчёт времени по дистанции, математическая модель из ТЗ
};