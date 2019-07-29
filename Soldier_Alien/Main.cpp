/*








*/
#include <cstdlib>
#include <iostream>
#include <string>
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

	string name;
	string orders;
	string rank;
	bool eggs;
	bool drones;
	bool breath;
	bool medicine;
	bool surgery;
	bool claws;
	bool defib;
	bool ammo;
	bool weapon;
	
	cout << "\tALIEN SOLDIER HYBRIDS!!" << endl;

	QueenOfficer QO = QueenOfficer(cin.getline(name), cin.getline(orders), cin.getline(eggs), cin.getline(drones));

	cout << QO.giveOrders() << endl;










}