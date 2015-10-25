#pragma once
#include "SlotInfo.h"
#include "PlanetInfo.h"
class Planet
{
public:
	char unknown[0x285];
	PlanetInfo * Statistics;
	char unknown2[0xad3];
	SlotInfo Slots[18];
};

