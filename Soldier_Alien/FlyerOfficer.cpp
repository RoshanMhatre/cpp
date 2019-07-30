
#include <string>
#include "FlyerOfficer.h"

void FlyerOfficer::setRank(string rankIn) {
	rank = rankIn;
}

string FlyerOfficer::getRank() {
	return rank;
}

void FlyerOfficer::shoutOrders() {
	if (orders.empty()) {
		cout << "No orders!!" << endl;
	}
	else {
		cout << "All Hybrid Aliens " << orders << "!!!" << endl;
	}
}