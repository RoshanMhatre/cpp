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
	string rank = "Captain";
public:
	void setRank(string);
	string getRank();
	void shoutOrders();
};

#endif /* FLYEROFFICER_H */