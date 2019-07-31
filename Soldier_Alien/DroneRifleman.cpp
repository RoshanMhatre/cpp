
#include <string>
#include "DroneRifleman.h"

void DroneRifleman::setWeaponReady(bool hasWeaponReadyIn) {
	hasWeaponReady = hasWeaponReadyIn;
}

bool DroneRifleman::getWeaponReady() {
	return hasWeaponReady;
}

void DroneRifleman::swarmAttack() {
	cout << "The Hybrid Drones all turn their attention in unison against a single target, and flood over the enemy in a vicious swarm of claws!!" << endl;
}