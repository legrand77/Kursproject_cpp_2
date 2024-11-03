#include "CounterRegistration.h"
#include "registration.h"
int CounterRegistration(registration* e)
{ int counter{};
	for (int i=0; i<8; i++)
{ 	
	counter = counter + e->registrationList[i].status;
}
	return counter;
}