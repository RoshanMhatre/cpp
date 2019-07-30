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
	string orders = "Attack!!";

public:

	void setOrders(string);
	string getOrders();
	void giveOrders();
};

#endif /* OFFICER_H */