
#include <string>
#include "Alien.h"

void Alien::setSpecies(string speciesIn) {
	species = speciesIn;
}

void Alien:: setSize(string sizeIn) {
	size = sizeIn;
}

string Alien:: getSpecies() {
	return species;
}

string Alien:: getSize() {
	return size;
}