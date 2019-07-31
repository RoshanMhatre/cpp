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
	bool hasMedicine = true;

public:
	void setHasMedicine(bool);
	bool getHasMedicine();
	void attack();
};
#endif /* MEDIC_H */