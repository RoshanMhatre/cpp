#pragma once

#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

#ifndef SOLDIER_H
#define SOLDIER_H

class Soldier {

protected:
	string rank;
	
public:

	void setRank(string);
	string getRank();
	virtual void attack() = 0;
};

#endif /* SOLDIER_H */