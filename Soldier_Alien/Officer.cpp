
#include <string>
#include "Officer.h"

void Officer::setOrders(bool ordersIn) {
	givesOrders = ordersIn;
}

bool Officer::getOrders() {
	return givesOrders;
}

void Officer::attack() {
	cout << "The Officer shouts the orders while stabbing an enemy with a bayonet!!" << endl;
}