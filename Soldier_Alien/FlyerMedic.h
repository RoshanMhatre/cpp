#pragma once
#include <cstdlib>
#include <iostream>
#include <string>
#include "Alien.h"
#include "Soldier.h"
#include "Flyer.h"
#include "Medic.h"

using namespace std;

#ifndef FLYERMEDIC_H
#define FLYERMEDIC_H

class FlyerMedic : public Flyer, public Medic {
protected:
	string size = "LARGE";
	bool hasSurgeryKit = true;

public:

	void setHasSurgeryKit(bool);
	bool getHasSurgeryKit();
	void useSurgeryKit();
};

#endif /* FLYERMEDIC_H */
