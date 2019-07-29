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
	string orders;

public:
	Officer() {

	}

	Officer(string nameIn, string ordersIn) {
		name = nameIn;
		orders = ordersIn;
	}

	void setOrders(string);
	string getOrders();
	void giveOrders();
};

#endif /* OFFICER_H */