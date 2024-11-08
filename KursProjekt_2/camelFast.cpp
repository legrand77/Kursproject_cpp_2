#include "ground.h"
#include "camelFast.h"
#include "transport.h"
#include < math.h >

camelFast::camelFast(double a, double b, double c, double c1, double c2, double x) // Верблюд-быстроход
{
	name = "Верблюд-быстроход";
	speed = a;
	DrivingTime = b;
	rest[0] = c;
	rest[1] = c1;
	rest[2] = c2;
	way = x;
    time = way / speed;
	if ((time / DrivingTime > 1 && time / DrivingTime < 2))  time = time + rest[0];
	else if ((time / DrivingTime > 2 && time / DrivingTime < 3))  time = time + rest[0] + rest[1];
	else if ((time / DrivingTime >= 3))  time = time + rest[0] + rest[1] + rest[2] * (ceil(time / DrivingTime) - 3);	
};
