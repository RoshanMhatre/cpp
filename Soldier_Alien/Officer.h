#pragma once

#include <cstdlib>
#include <iostream>
#include <string>
#include "Soldier.h"
using namespace std;

#ifndef OFFICER_H
#define OFFICER_H

class Officer : public Soldier {
protected:
	bool givesOrders = true;

public:

	void setOrders(bool);
	bool getOrders();
	void attack();
};

#endif /* OFFICER_H */