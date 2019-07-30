
#include <string>
#include "Alien.h"

void Alien:: setSize(string sizeIn) {
	size = sizeIn;
}

string Alien:: getSize() {
	return size;
}

void Alien::alienScream() {
	cout << "The Alien screams with spittle flying everywhere!!!" << endl;
}