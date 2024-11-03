#include "inputRegistration.h"
#include <iostream>
#include "ground.h"
#include "terrainBoots.h"
#include "transport.h"
#include "air.h"
#include "magicCarpet.h"
#include "centaur.h"
#include "camelFast.h"
#include "camel.h"
#include "broomstick.h"
#include "eagle.h"
#include "printRacer.h"
#include "transportList.h"
#include "registration.h"
#include "inputRegistration.h"

void inputRegistration(int type, int typeTransport, int pathLength, registration* e)
{	
	for (int i = 0; i < 8; i++)
	{
		if ((e->registrationList[i].type == type) || (type==3))
		{
			if ((typeTransport - 1) == i)
			{

				if (e->registrationList[i].status == 0)
				{
					e->registrationList[i].status = 1;
					std::cout << e->registrationList[i].name << " успешно зарегистрирован!" << std::endl;
					return;
				}
				else  std::cout << e->registrationList[i].name << " уже зарегистрирован!" << std::endl;
				return;
			}
		}

	};
	std::cout  << "Попытка зарегистрировать неправильный тип транспортного средства! " << std::endl;
}