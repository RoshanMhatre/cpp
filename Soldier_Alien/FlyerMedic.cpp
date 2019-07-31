
#include <string>
#include "FlyerMedic.h"

void FlyerMedic::setHasSurgeryKit(bool hasSurgeryKitIn) {
	hasSurgeryKit = hasSurgeryKitIn;
}

bool FlyerMedic::getHasSurgeryKit() {
	return hasSurgeryKit;
}

void FlyerMedic::useSurgeryKit() {
	cout << "The Flyer Medic uses its surgery kit on a comrade!!" << endl;
}