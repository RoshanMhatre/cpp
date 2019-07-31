
#include <string>
#include "Rifleman.h"

void Rifleman::setHasAmmo(bool hasAmmoIn) {
	hasAmmo = hasAmmoIn;
}

bool Rifleman::getHasAmmo() {
	return hasAmmo;
}

void Rifleman::attack() {
	cout << "The Rifleman takes a shot with his Rifle!!" << endl;
}