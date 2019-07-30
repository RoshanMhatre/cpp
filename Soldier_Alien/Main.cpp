/*








*/
#include <cstdlib>
#include <cstdio>
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
#include "Main.h"

using namespace std;

int main() {

	cout << "ALIEN SOLDIER HYBRIDS!!" << endl;
	cout << "The Battle Begins!" << endl;

	QueenOfficer q;
	FlyerOfficer fo;
	FlyerMedic fm;
	DroneMedic dm;
	DroneRifleman dr;

	q.getName();
	q.getSize();
	q.alienScream();
	q.giveOrders();
	q.implantEggs();
	q.orderDrones();

	fo.alienScream();
	fo.shootAcidBreath();
	fo.shoutOrders();

	return 0;

}