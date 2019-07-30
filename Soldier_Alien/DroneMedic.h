#pragma once

#include <cstdlib>
#include <iostream>
#include <string>
#include "Soldier.h"
#include "Alien.h"
#include "Medic.h"
#include "Drone.h"

using namespace std;

#ifndef DRONEMEDIC_H
#define DRONEMEDIC_H

class DroneMedic : public Medic, public Drone {
protected:
	bool hasDefib = true;

public:
	void setHasDefib(bool);
	bool getHasDefib();
	void useDefib();
};

#endif /* DRONEMEDIC_H */
