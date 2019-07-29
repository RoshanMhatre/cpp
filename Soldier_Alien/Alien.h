#pragma once

#include <cstdlib>
#include <iostream>
#include <string>

using namesapce std;

#ifndef SOLDIER_H
#define SOLDIER_H

class Alien {
protected:
	string species;
	string size;

public:
	Alien() {

	}

	Alien(speciesIn, sizeIn) {
		this.species = speciesIn;
		this.size = sizeIn;
	}

	void setSpecies(string);
	void setSize(string);
	string getSpecies();
	string getSize();

};




#endif /* SOLDIER_H */