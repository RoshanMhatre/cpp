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
	bool hasEggs = true;

public:

	void setHasEggs(bool);
	bool getHasEggs();
	void alienScream();
};

#endif /* QUEEN_H */