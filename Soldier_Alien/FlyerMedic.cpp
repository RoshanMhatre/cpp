
#include <string>
#include "FlyerMedic.h"

void FlyerMedic::setHasSurgeryKit(bool hasSurgeryKitIn) {
	hasSurgeryKit = hasSurgeryKitIn;
}

bool FlyerMedic::getHasSurgeryKit() {
	return hasSurgeryKit;
}

void FlyerMedic::useSurgeryKit() {
	if (hasSurgeryKit) {
		cout << "The Flyer Medic uses its surgery kit on a comrade!!" << endl;
	}
	else {
		cout << "The Flyer Medic has no surgery kit to use!!" << endl;
	}
}