
#include <string>
#include "Flyer.h"

void Flyer::setHasAcidBreath(bool hasAcidBreathIn) {
	hasAcidBreath = hasAcidBreathIn;
}

bool Flyer::getHasAcidBreath() {
	return hasAcidBreath;
}

void Flyer::alienScream() {
	cout << "The Flyer screams in rages and spits acid all over it's enemies!!" << endl;
}