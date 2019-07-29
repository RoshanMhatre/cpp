#pragma once

#include <cstdlib>
#include <iostream>
#include <string>

using namesapce std;

#ifndef SOLDIER_H
#define SOLDIER_H

class Solider {

protected:
	string name;
	
public:
	Soldier() {

	}

	Soldier(nameIn) {
		name = nameIn;
	}

	void setName(string);
	string getName();

};

#endif /* SOLDIER_H */