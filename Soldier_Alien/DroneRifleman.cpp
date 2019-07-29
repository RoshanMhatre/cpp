
#include <string>
#include "DroneRifleman.h"

void DroneRifleman::setWeaponReady(bool hasWeaponReadyIn) {
	hasWeaponReady = hasWeaponReadyIn;
}

bool DroneRifleman::getWeaponReady() {
	return hasWeaponReady;
}

void DroneRifleman::attack() {
	if (hasWeaponReady && hasAmmo) {
		takeShot();
	}
	else {
		clawAttack();
	}
}