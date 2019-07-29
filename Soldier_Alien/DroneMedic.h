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
	bool hasDefib;

public:
	DroneMedic() {

	}

	DroneMedic(string nameIn, bool hasMedicineIn, bool hasClawsIn, bool hasDefibIn) {
		name = nameIn;
		hasMedicine = hasMedicineIn;
		hasClaws = hasClawsIn;
		hasDefib = hasDefibIn;
	}

	void setHasDefib(bool);
	bool getHasDefib();
	void useDefib();
};

#endif /* DRONEMEDIC_H */
