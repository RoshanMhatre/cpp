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
	bool hasClaws = true;

public:

	void setHasClaws(bool);
	bool getHasClaws();
	void clawAttack();
};

#endif /* DRONE_H */