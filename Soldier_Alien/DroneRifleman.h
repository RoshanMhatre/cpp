#pragma once

#include <cstdlib>
#include <iostream>
#include <string>
#include "Soldier.h"
#include "Alien.h"
#include "Rifleman.h"
#include "Drone.h"

using namespace std;

#ifndef DRONERIFLEMAN_H
#define DRONERIFLEMAN_H

class DroneRifleman : public Rifleman, public Drone {
protected:
	bool hasWeaponReady = true;

public:

	void setWeaponReady(bool);
	bool getWeaponReady();
	void attack();
};

#endif /* DRONERIFLEMAN_H */
