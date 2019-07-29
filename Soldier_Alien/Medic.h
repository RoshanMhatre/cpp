#pragma once

#include <cstdlib>
#include <iostream>
#include <string>
#include "Soldier.h"
using namespace std;

#ifndef MEDIC_H
#define MEDIC_H

class Medic : public Soldier {
protected:
	bool hasMedicine;

public:
	Medic() {

	}

	Medic(string nameIn, bool hasMedicineIn) {
		name = nameIn;
		hasMedicine = hasMedicineIn;
	}

	void setHasMedicine(bool);
	bool getHasMedicine();
	void giveMedicine();
};
#endif /* MEDIC_H */