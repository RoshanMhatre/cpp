#pragma once

#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

#ifndef SOLDIER_H
#define SOLDIER_H

class Soldier {

protected:
	string name;
	
public:
	Soldier() {

	}

	Soldier(string nameIn) {
		name = nameIn;
	}

	void setName(string);
	string getName();
};

#endif /* SOLDIER_H */