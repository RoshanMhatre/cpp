#pragma once
#include <cstdlib>
#include <iostream>
#include <string>
#include "Alien.h"

using namespace std;

#ifndef FLYER_H
#define FLYER_H

class Flyer : public Alien {
protected:
	bool hasAcidBreath;

public:
	Flyer() {
		size = "LARGE";
	}

	Flyer(bool hasAcidBreathIn) {
		size = "LARGE";
		hasAcidBreath = hasAcidBreathIn;
	}

	void setHasAcidBreath(bool);
	bool getHasAcidBreath();
	void shootAcidBreath();
};

#endif /* FLYER_H */
