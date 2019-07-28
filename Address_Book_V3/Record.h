#pragma once

/* Author: Rodney Nedlose
 * Date: 7.1.19
 * File:   Record.h
 * Purpose: Header file for the class Record.
 * Input: Data values input via set functions
 * and assigned to member variables.
 * Output: Data values retrieved by get functions
 * and returned to the caller.
 * Exceptions: None.
 */

#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

#ifndef RECORD_H
#define RECORD_H

class Record
{
private:
	int recordNum;
	string firstName;
	string lastName;
	string age;
	string phoneNum;

public:

	// Default Constructor
	Record()
	{
	}

	// Override Constructor
	Record(int recordIn, string fNameIn, string lNameIn,
		string ageIn, string pNumIn)
		:recordNum(recordIn), firstName(fNameIn),
		lastName(lNameIn), age(ageIn), phoneNum(pNumIn)
	{

	}

	// Set Functions

	void setRecordNum(int recordIn);
	void setFirstName(string fNameIn);
	void setLastName(string lNameIn);
	void setAge(string ageIn);
	void setPhoneNum(string pNumIn);

	// Get Functions

	int getRecordNum();
	string getFirstName();
	string getLastName();
	string getAge();
	string getPhoneNum();

};

#endif /* RECORD_H */

