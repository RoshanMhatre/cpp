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
	bool hasWeaponReady;

public:
	DroneRifleman() {

	}

	DroneRifleman(string nameIn, bool hasAmmoIn, bool hasClawsIn, bool hasWeaponReadyIn) {
		name = nameIn;
		hasAmmo = hasAmmoIn;
		hasClaws = hasClawsIn;
		hasWeaponReady = hasWeaponReadyIn;	
	}

	void setWeaponReady(bool);
	bool getWeaponReady();
	void attack();
};

#endif /* DRONERIFLEMAN_H */
