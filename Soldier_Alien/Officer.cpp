
#include <string>
#include "Officer.h"

void Officer::setOrders(string ordersIn) {
	orders = ordersIn;
}

string Officer::getOrders() {
	return orders;
}

void Officer::giveOrders() {
	if (orders.empty()) {
		cout << "Still awaiting orders!!" << endl;
	}
	else {
		cout << "The orders are " << orders << "!!!" << endl;
	}
}