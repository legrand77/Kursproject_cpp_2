#include "registration.h"
#include "printRegisration.h"
#include <iostream>
void printRegisration(registration* e)
{std::cout <<  "«арегистрированные транспортные средства: ";
int counter{};
	for (int i = 0; i < 8; i++)
	{
			if (e->registrationList[i].status)
			{
				counter++;
				if (counter > 1) std::cout << ", ";
				std::cout << e->registrationList[i].name;
				
			}
	}
	std::cout << std::endl;
};