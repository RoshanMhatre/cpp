
#include <string>
#include "Drone.h"

void Drone::setHasClaws(bool hasClawsIn) {
	hasClaws = hasClawsIn;
}

bool Drone::getHasClaws() {
	return hasClaws;
}

void Drone::alienScream(){
	cout << "The Drone screams with spittle flying and attacks with it's claws!!!" << endl;
}