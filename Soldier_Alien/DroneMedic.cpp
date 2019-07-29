
#include <string>
#include "DroneMedic.h"

void DroneMedic::setHasDefib(bool hasDefibIn) {
	hasDefib = hasDefibIn;
}

bool DroneMedic::getHasDefib() {
	return hasDefib;
}

void DroneMedic::useDefib() {
	if (hasDefib) {
		cout << "The Drone Medic is using a defibrilator on a comrade!!" << endl;
	}
	else {
		cout << "The Drone Medic no longer has a defibrilator!!" << endl;
	}
}