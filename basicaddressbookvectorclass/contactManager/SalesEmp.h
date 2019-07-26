/* Author: Rodney Nedlose
 * Date: 7.25.19
 * File:   SalesEmp.h
 * Purpose: Header file for the child class SalesEmp
 * Input:
 * Output: 
 * Exceptions: None.
 */

#include <cstdlib>
#include <iostream>
#include <string>
#include "Employer.h"

using namespace std;

#ifndef SALESEMP_H
#define SALESEMP_H

class SalesEmp: public Employer
{
protected:
	string workDpmt;

public:

	// @Overloaded functions
	void setRecordNum(int);
	void setWorkPhone(string);
	void setDepartment();

	int getRecordNum();
	string getWorkPhone();
	string getDepartment();

};

#endif /* SALESEMP_H */