
#include <string>
#include "QueenOfficer.h"

void QueenOfficer::setControlDrones(bool controlDronesIn) {
	controlDrones = controlDronesIn;
}

bool QueenOfficer::getControlDrones() {
	return controlDrones;
}

void QueenOfficer::dronesAttack() {
	cout << "The Huge Hybrid Queen directs her Drones to swarm over a single opponent with a hiss and flip of her barbed tail!!" << endl;
}