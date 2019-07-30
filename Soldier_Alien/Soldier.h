#pragma once

#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

#ifndef SOLDIER_H
#define SOLDIER_H

class Soldier {

protected:
	string name = "Bob";
	
public:

	void setName(string);
	string getName();
};

#endif /* SOLDIER_H */