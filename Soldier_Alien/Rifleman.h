#pragma once

#include <cstdlib>
#include <iostream>
#include <string>
#include "Soldier.h"
using namesapce std;

#ifndef RIFLEMAN_H
#define RIFLEMAN_H

class Rifleman : public Soldier {
protected:
	bool hasAmmo;

public:
	Rifleman() {

	}

	Rifleman(string nameIn, bool hasAmmoIn) {
		name = nameIn;
		hasAmmo = hasAmmoIn;
	}

	void setHasAmmo(string);
	bool getHasAmmo();
	void takeShot();
};
#endif /* RIFLEMAN_H */