#pragma once
#include <cstdlib>
#include <iostream>
#include <string>
#include "Alien.h"
#include "Soldier.h"
#include "Flyer.h"
#include "Officer.h"

using namespace std;

#ifndef FLYEROFFICER_H
#define FLYEROFFICER_H

class FlyerOfficer : public Flyer, public Officer {
protected:
	string rank;

public:
	FlyerOfficer() {
		size = "LARGE";
	}

	FlyerOfficer(string nameIn, string ordersIn, bool hasAcidBreathIn, string rankIn ) {
		size = "LARGE";
		name = nameIn;
		orders = ordersIn;
		hasAcidBreath = hasAcidBreathIn;
		rank = rankIn;
	}

	void setRank(string);
	string getRank();
};

#endif /* FLYEROFFICER_H */