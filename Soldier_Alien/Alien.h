#pragma once

#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

#ifndef ALIEN_H
#define ALIEN_H

class Alien {
protected:
	string size;

public:
	Alien() {

	}

	Alien(string sizeIn) {
		size= sizeIn;
	}

	void setSize(string);
	string getSize();
};

#endif /* ALIEN_H */