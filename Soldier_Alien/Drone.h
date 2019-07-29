#pragma once
#include <cstdlib>
#include <iostream>
#include <string>
#include "Alien.h"

using namespace std;

#ifndef DRONE_H
#define DRONE_H

class Drone : public Alien {
protected:
	bool hasClaws;

public:
	Drone() {
		size = "MEDIUM";
	}

	Drone(bool hasClawsIn) {
		size = "MEDIUM";
		hasClaws = hasClawsIn;
	}

	void setHasClaws(bool);
	bool getHasClaws();
	void clawAttack();
};

#endif /* DRONE_H */