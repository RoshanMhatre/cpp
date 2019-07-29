#pragma once

#include <cstdlib>
#include <iostream>
#include <string>
#include "Soldier.h"
using namesapce std;

#ifndef OFFICER_H
#define OFFICER_H

class Officer : public Soldier {
protected:
	string rank;
	string orders;

public:
	Officer() {

	}

	Officer(string nameIn, string rankIn) {
		name = nameIn;
		rank = rankIn;
	}

	void setRank(string);
	void getRank();

	void setOrders(string);
	string getOrders();
	void giveOrders();


};
#endif /* OFFICER_H */