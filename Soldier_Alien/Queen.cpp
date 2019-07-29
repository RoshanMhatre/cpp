
#include <string>
#include "Queen.h"

void Queen::setHasEggs(bool hasEggsIn) {
	hasEggs = hasEggsIn;
}

bool Queen::getHasEggs() {
	return hasEggs;
}

void Queen::implantEggs() {
	if (hasEggs) {
		cout << "The Queen stabs with her tail and impants eggs!!" << endl;
	}
	else {
		cout << "The Queen has no eggs to implant!!" << endl;
	}
}