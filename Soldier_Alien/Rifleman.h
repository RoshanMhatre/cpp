#pragma once

#include <cstdlib>
#include <iostream>
#include <string>
#include "Soldier.h"
using namespace std;

#ifndef RIFLEMAN_H
#define RIFLEMAN_H

class Rifleman : public Soldier {
protected:
	bool hasAmmo = true;

public:

	void setHasAmmo(bool);
	bool getHasAmmo();
	void attack();
};

#endif /* RIFLEMAN_H */