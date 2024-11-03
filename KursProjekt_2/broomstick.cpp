#include "air.h"
#include "broomstick.h"
#include "transport.h"
#include < math.h >
broomstick::broomstick(int a, double x)
{
    name = "Метла";
    speed = a;
    double x1{};
    x1 = static_cast<int>(x / 1000) / static_cast<double>(100);
    way = x * (1 - x1);
    time = way / speed;
};