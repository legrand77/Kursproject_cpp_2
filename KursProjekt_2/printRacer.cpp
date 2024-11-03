#include <iostream>
#include "printRacer.h";
void printRacer(int type, int pathLength) // вывод типа гонки и рассто€ни€
{
	if (type == 1) std::cout << "√онка дл€ наземного транспорта.";
	else if (type == 2) std::cout << "√онка дл€ воздушного транспорта.";
	else if (type == 3) std::cout << "√онка дл€ наземного и воздушного транспорта.";
	std::cout << " –ассто€ние: " << pathLength << std::endl;
};