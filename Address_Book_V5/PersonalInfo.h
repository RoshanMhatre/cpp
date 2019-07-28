/* Author: Rodney Nedlose
 * Date: 7.15.19
 * File:   PersonalInfo.h
 * Purpose: Header file for the class PersonalInfo.
 * Input: 
 * Output: 
 * Exceptions: None.
 */

#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

#ifndef PERSONALINFO_H
#define PERSONALINFO_H

class PersonalInfo
{
private:
	string firstName;
	string lastName;
	string age;
	string phoneNum;

public:

	// Default Constructor
	PersonalInfo()
	{
	}

	// Override Constructor
	PersonalInfo(string fNameIn, string lNameIn,
		string ageIn, string pNumIn)
		:firstName(fNameIn),
		lastName(lNameIn), age(ageIn), phoneNum(pNumIn)
	{

	}

	// Set Functions

	void setFirstName(string fNameIn);
	void setLastName(string lNameIn);
	void setAge(string ageIn);
	void setPhoneNum(string pNumIn);

	// Get Functions

	string getFirstName();
	string getLastName();
	string getAge();
	string getPhoneNum();

};

#endif /* PERSONALINFO_H */