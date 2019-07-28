/* Author: Rodney Nedlose
 * Date: 7.23.19
 * File:   Employer.h
 * Purpose: Header file for the class Employer.
 * Input:
 * Output: 
 * Exceptions: None.
 */

#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

#ifndef EMPLOYER_H
#define EMPLOYER_H

class Employer
{
protected:
	int recordNum;
	string workPhNum;
	string workDpmt;

public:

	// Default Constructor
	Employer()
	{
	}

	// @Overloaded Constructor
	Employer(int recordNumIn, string workPhNumIn)
		:recordNum(recordNumIn), workPhNum(workPhNumIn)
	{
	}

	// Set Functions

	void setRecordNum(int recordIn);
	void setWorkPhone(string phNumIn);
	void setDepartment();

	// Get Functions

	int getRecordNum();
	string getWorkPhone();
	string getDepartment();

};

#endif /* RECORD_H */