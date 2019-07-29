
#include <string>
#include "Drone.h"

void Drone::setHasClaws(bool hasClawsIn) {
	hasClaws = hasClawsIn;
}

bool Drone::getHasClaws() {
	return hasClaws;
}

void Drone::clawAttack() {
	if (hasClaws) {
		cout << "The Drone jumps on a soldier and uses its claws to rip flesh!!" << endl;
	}
	else {
		cout << "The Drone does not have any claws to attack with!!" << endl;
	}
}