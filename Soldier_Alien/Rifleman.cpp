
#include <string>
#include "Rifleman.h"

void Rifleman::setHasAmmo(bool hasAmmoIn) {
	hasAmmo = hasAmmoIn;
}

bool Rifleman::getHasAmmo() {
	return hasAmmo;
}

void Rifleman::takeShot() {
	if (hasAmmo) {
		cout << "The Rifleman takes a shot!!" << endl;
	}
	else {
		cout << "The Rifleman has no ammo!!" << endl;
	}
}