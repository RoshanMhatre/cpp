
#include <string>
#include "Queen.h"

void Queen::setHasEggs(bool hasEggsIn) {
	hasEggs = hasEggsIn;
}

bool Queen::getHasEggs() {
	return hasEggs;
}

void Queen::alienScream() {
	cout << "The Queen screams in unnatural rage and stabs her victim with her tail, implanting her eggs within!!" << endl;
}
