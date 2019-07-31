
#include <string>
#include "FlyerOfficer.h"

void FlyerOfficer::setRank(string rankIn) {
	rank = rankIn;
}

string FlyerOfficer::getRank() {
	return rank;
}

void FlyerOfficer::shoutOrders() {
	cout << "Spittle flies from the Hybrid's lips as it shouts the orders to Attack!!" << endl;
}