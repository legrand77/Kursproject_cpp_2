#pragma once
#include "spec.h"
#include "transport.h"

 class air : public transport
{
protected:
	KURSPROJEKT_2_API	air() { type = TransportType::Air; }
};