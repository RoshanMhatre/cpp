
#include <string>
#include "Medic.h"

void Medic::setHasMedicine(bool hasMedicineIn) {
	hasMedicine = hasMedicineIn;
}

bool Medic:: getHasMedicine() {
	return hasMedicine;
}

void Medic::attack(){
	cout << "The Medic shoots his Laser Pistol at an enemy and quickly ducks behind cover to adminster pain meds to his comrade!!" << endl;
}