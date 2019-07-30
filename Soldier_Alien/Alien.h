#pragma once

#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

#ifndef ALIEN_H
#define ALIEN_H

class Alien {
protected:
	string size = "MEDIUM";

public:
	void setSize(string);
	string getSize();
	void alienScream();
};

#endif /* ALIEN_H */