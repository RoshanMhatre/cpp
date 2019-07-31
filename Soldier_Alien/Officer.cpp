
#include <string>
#include "Officer.h"

void Officer::setOrders(bool ordersIn) {
	givesOrders = ordersIn;
}

bool Officer::getOrders() {
	return givesOrders;
}

void Officer::attack() {
	cout << "The Officer shouts his orders while stabbing an enemy with his bayonet!!" << endl;
}