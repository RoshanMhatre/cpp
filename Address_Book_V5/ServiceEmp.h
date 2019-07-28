/* Author: Rodney Nedlose
 * Date: 7.25.19
 * File:   ServiceEmp.h
 * Purpose: Header file for the child class ServiceEmp
 * Input:
 * Output: 
 * Exceptions: None.
 */

#include <cstdlib>
#include <iostream>
#include <string>
#include "Employer.h"

using namespace std;

#ifndef SERVICEEMP_H
#define SERVICEEMP_H

class ServiceEmp: public Employer
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

#endif /* SERVICEEMP_H */