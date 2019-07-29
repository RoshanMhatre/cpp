#pragma once
#include <cstdlib>
#include <iostream>
#include <string>
#include "Alien.h"

using namespace std;

#ifndef QUEEN_H
#define QUEEN_H

class Queen: public Alien {
protected:
	bool hasEggs;

public:
	Queen() {
		size = "HUGE";
	}

	Queen(bool hasEggsIn) {
		size = "HUGE";
		hasEggs = hasEggsIn;
	}

	void setHasEggs(bool);
	bool getHasEggs();
	void implantEggs();
};

#endif /* QUEEN_H */