/*








*/
#include <cstdlib>
#include <string>
#include <iostream>
#include <vector>
#include <exception>
#include "Alien.h"
#include "Queen.h"
#include "Drone.h"
#include "Flyer.h"
#include "Soldier.h"
#include "Officer.h"
#include "Medic.h"
#include "Rifleman.h"
#include "DroneMedic.h"
#include "DroneRifleman.h"
#include "FlyerMedic.h"
#include "FlyerOfficer.h"
#include "QueenOfficer.h"

using namespace std;

int main() {

	string answer;
	string name;
	string orders;
	string rank;
	bool eggs{};
	bool drones{};
	bool breath;
	bool medicine;
	bool surgery;
	bool claws;
	bool defib;
	bool ammo;
	bool weapon;
	
	cout << "\tALIEN SOLDIER HYBRIDS!!" << endl;

	cout << "\tLet us start with the Queen Officer." <<
		"\n\tPlease enter a name: " << endl;
	cin >> name;
	cout << "\n\tDoes she have eggs: " << endl;
	cin.ignore();
	cin >> answer;
	if (answer == "yes" || answer == "Yes") {
		eggs = true;
	}
	else {
		eggs = false;
	}
	cout << "\n\tIs she able to control her Drones: " << endl;
	cin.ignore();
	cin >> answer;
	if (answer == "yes" || answer == "Yes") {
		drones = true;
	}
	else {
		drones = false;
	}

	QueenOfficer QO = QueenOfficer(name, orders, eggs, drones);

	QO.giveOrders();


	return 0;

}