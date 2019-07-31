/* Author: Rodney Nedlose
 * Date: 7.30.19
 * File:   Main.cpp
 * Purpose: Show multiple inheritance and polymorphism
 * by creating multiple classes with derived classes
 * and derived classes of the derived classes.
 * Uses a bit of abstract classes as well.
 * Input: None
 * Output: Shows a story using the unique functions for each
 * of the hybrid derived classes.
 * Exceptions: None.*/
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

using namespace std;

int main() {

	cout << "ALIEN SOLDIER HYBRIDS!!" << endl;
	cout << "The Battle Begins!" << endl;

	QueenOfficer q;
	FlyerOfficer fo;
	FlyerMedic fm;
	DroneMedic dm;
	DroneRifleman dr;

	q.setSize("HUGE");
	q.setRank("GENERAL");
	cout << "Rank: " << q.getRank() << endl;
	cout << "Size: " << q.getSize() << endl;
	q.alienScream();
	q.attack();
	q.dronesAttack();

	fo.setSize("LARGE");
	fo.setRank("CAPTAIN");
	cout << "Rank: " << fo.getRank() << endl;
	cout << "Size: " << fo.getSize() << endl;
	fo.alienScream();
	fo.attack();
	fo.shoutOrders();

	fm.setSize("LARGE");
	fm.setRank("LT");
	cout << "Rank: " << fm.getRank() << endl;
	cout << "Size: " << fm.getSize() << endl;
	fm.alienScream();
	fm.attack();
	fm.useSurgeryKit();

	dm.setSize("MEDIUM");
	dm.setRank("DRONE");
	cout << "Rank: " << dm.getRank() << endl;
	cout << "Size: " << dm.getSize() << endl;
	dm.alienScream();
	dm.attack();
	dm.useDefib();
	
	dr.setSize("MEDIUM");
	dr.setRank("DRONE");
	cout << "Rank: " << dr.getRank() << endl;
	cout << "Size: " << dr.getSize() << endl;
	dr.alienScream();
	dr.attack();
	dr.swarmAttack();
	




	return 0;

}