#include "air.h"
#include "eagle.h"
#include "transport.h"
eagle::eagle(int a, double b)
{
name = "����";
speed = a;
way = b * 0.94;
time = way / speed;
}