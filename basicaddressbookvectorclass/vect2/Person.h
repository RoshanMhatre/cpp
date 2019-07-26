#pragma once

/* Author: Rodney Nedlose
 * Date: 7.15.19
 * File:   Person.h
 * Purpose: Header file for the class Person.
 * Input: Data values input via set functions
 * and assigned to member variables.
 * Output: Data values retrieved by get functions
 * and returned to the caller.
 * Exceptions: None.
 */

#include <cstdlib>
#include <iostream>
#include <string>
#include "PersonalInfo.h"
#include "Employer.h"

using namespace std;

#ifndef PERSON_H
#define PERSON_H

class Person
{
private:
	PersonalInfo pInfo;
	Employer employer;

public:

	// Default Constructor
	Person()
	{
	}

	// Set Functions for PersonalInfo object
	void setFirstName(string);
	void setLastName(string);
	void setAge(string);
	void setPhNum(string);

	// Set Functions for Employer object
	void setRecord(int);
	void setEmpDpmt(string);
	void setWorkPhn(string);

	// Get Functions
	string getFirstName();
	string getLastName();
	string getAge();
	string getPhNum();	

	// Get Functions for Employer object
	int getRecord();
	string getEmpDpmt();
	string getWorkPhn();


};

#endif /* RECORD_H */