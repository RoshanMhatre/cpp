#pragma once
#include <cstdlib>
#include <iostream>
#include <string>
#include "Alien.h"
#include "Soldier.h"
#include "Queen.h"
#include "Officer.h"

using namespace std;

#ifndef QUEENOFFICER_H
#define QUEENOFFICER_H

class QueenOfficer : public Queen, public Officer {
protected:
	bool controlDrones;

public:
	QueenOfficer() {
		size = "HUGE";
	}

	QueenOfficer(string nameIn, string ordersIn, bool hasEggsIn, bool controlDronesIn) {
		size = "HUGE";
		name = nameIn;
		orders = ordersIn;
		hasEggs = hasEggsIn;
		controlDrones = controlDronesIn;
	}

	void setControlDrones(bool);
	bool getControlDrones();
	void orderDrones();
};

#endif /* QUEENOFFICER_H */
