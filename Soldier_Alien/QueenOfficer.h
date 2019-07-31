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
	bool controlDrones = true;
	
public:

	void setControlDrones(bool);
	bool getControlDrones();
	void dronesAttack();

};

#endif /* QUEENOFFICER_H */
