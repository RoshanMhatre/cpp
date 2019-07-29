
#include <string>
#include "Medic.h"

void Medic::hasMedicine(hasMedicineIn) {
	hasMedicine = hasMedicineIn;
}

bool Medic:: getHasMedicine() {
	return hasMedicine;
}

void Medic::giveMedicine() {
	if (hasMedicine) {
		cout << "The Medic gives medicine to an injured soldier!!" << endl;
	}
	else {
		cout << "The Medic has no medicine to give!!" << endl;
	}
}