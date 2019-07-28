/* Author: Rodney Nedlose
 * Date: 7.15.19
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
private:
	int recordNum;
	string empDepartment;
	string workPhNum;

public:

	// Default Constructor
	Employer()
	{
	}

	// Override Constructor
	Employer(int recordIn, string dpmtIn, string phNumIn)
		:recordNum(recordIn), empDepartment(dpmtIn), workPhNum(phNumIn)
	{

	}

	// Set Functions

	void setRecordNum(int recordIn);
	void setEmpDpmt(string dpmtIn);
	void setWorkPhone(string phNumIn);

	// Get Functions

	int getRecordNum();
	string getWorkDpmt();
	string getWorkPhn();

};

#endif /* RECORD_H */