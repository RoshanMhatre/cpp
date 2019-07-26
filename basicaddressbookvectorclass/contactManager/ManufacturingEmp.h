/* Author: Rodney Nedlose
 * Date: 7.25.19
 * File:   ManufacturingEmp.h
 * Purpose: Header file for the child class ManufacturingEmp
 * Input:
 * Output: 
 * Exceptions: None.
 */

#include <cstdlib>
#include <iostream>
#include <string>
#include "Employer.h"

using namespace std;

#ifndef MANUFACTURINGEMP_H
#define MANUFACTURINGEMP_H

class ManufacturingEmp: public Employer
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

#endif /* MANUFACTURINGEMP_H*/