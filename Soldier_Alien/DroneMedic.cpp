
#include <string>
#include "DroneMedic.h"

void DroneMedic::setHasDefib(bool hasDefibIn) {
	hasDefib = hasDefibIn;
}

bool DroneMedic::getHasDefib() {
	return hasDefib;
}

void DroneMedic::useDefib() {
	cout << "The Hybrid Alien Drone Medic uses a defibrilator on a fallen comrade!!" << endl;
}
