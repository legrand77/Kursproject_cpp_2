#include "ground.h"
#include "centaur.h"
#include "transport.h"
#include < math.h >

centaur::centaur(double a, double b, double c, double x) // Кентавр
{
	name = "Кентавр";
	speed = a;
	DrivingTime = b;
	rest[0] = c;
	way = x;
    time = way / speed;
	if (time / DrivingTime > 1)  time = time + rest[0] * (ceil(time / DrivingTime) - 1);
};
