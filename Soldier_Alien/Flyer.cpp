
#include <string>
#include "Flyer.h"

void Flyer::setHasAcidBreath(bool hasAcidBreathIn) {
	hasAcidBreath = hasAcidBreathIn;
}

bool Flyer::getHasAcidBreath() {
	return hasAcidBreath;
}

void Flyer::shootAcidBreath() {
	if (hasAcidBreath) {
		cout << "The Flyer flies by and shoots its deadly Acid all over the soldiers!!" << endl;
	}
	else {
		cout << "The Flyer has already used all of its Acid!!" << endl;
	}	
}