#include "air.h"
#include "magicCarpet.h"
#include "transport.h"
#include < math.h >
magicCarpet::magicCarpet(double a, double x)
{
	name = "Ковер-самолет";
	speed = a;
	if (x < 1000) way = x;
	else if (x >= 1000 && x < 5000) way = x * 0.97;
	else if (x >= 5000 && x < 10000) way = x * 0.9;
	else if (x >= 10000) way = x * 0.95;
	time = way / speed;
};