#pragma once
#include <cstdlib>
#include <iostream>
#include <string>
#include "Alien.h"

using namespace std;

#ifndef FLYER_H
#define FLYER_H

class Flyer : public Alien {
protected:
	bool hasAcidBreath = true;

public:
	void setHasAcidBreath(bool);
	bool getHasAcidBreath();
	void alienScream();
};

#endif /* FLYER_H */
