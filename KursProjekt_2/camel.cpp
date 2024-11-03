#include "ground.h"
#include "camel.h"
#include "transport.h"
#include < math.h >

camel::camel(int a, double b, double c, double c1, double x)
{
	name = "Верблюд";
	speed = a;
	DrivingTime = b;
	rest[0] = c;
	rest[1] = c1;
	way = x;
	time = way / speed;
	if ((time / DrivingTime > 1 && time / DrivingTime < 2)) time = time + rest[0];
	else if ((time / DrivingTime >= 2)) time = time + rest[0] + rest[1] * (ceil(time / DrivingTime) - 2);
}