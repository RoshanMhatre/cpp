#pragma once

#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

#ifndef ALIEN_H
#define ALIEN_H

class Alien {
protected:
	string size;

public:
	void setSize(string);
	string getSize();
	virtual void alienScream() = 0;
};

#endif /* ALIEN_H */