#pragma once

/* Author: Rodney Nedlose
 * Date: 7.25.19
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
#include "SalesEmp.h"
#include "ServiceEmp.h"
#include "ManufacturingEmp.h"

using namespace std;

#ifndef PERSON_H
#define PERSON_H

class Person
{
private:
	string workDpmt;
	PersonalInfo pInfo;
	Employer employer;
	SalesEmp salesEmp;
	ServiceEmp serviceEmp;
	ManufacturingEmp manufacturingEmp;

public:

	// Default Constructor
	Person()
	{
	}
	// Constructor for generic Employer objects
	Person(PersonalInfo pInfoIn, Employer employerIn)
		:pInfo(pInfoIn), employer(employerIn)
	{
	}
	// Constructor for SalesEmp objects
	Person(PersonalInfo pInfoIn, SalesEmp salesEmpIn, string workDpmtIn)
		:pInfo(pInfoIn), salesEmp(salesEmpIn), workDpmt(workDpmtIn)
	{
	}
	// Constructor for ServiceEmp objects
	Person(PersonalInfo pInfoIn, ServiceEmp serviceEmpIn, string workDpmtIn)
		:pInfo(pInfoIn), serviceEmp(serviceEmpIn), workDpmt(workDpmtIn)
	{
	}
	// Constructor for ManufacturingEmp objects
	Person(PersonalInfo pInfoIn, ManufacturingEmp manufacturingEmpIn, string workDpmtIn)
		:pInfo(pInfoIn), manufacturingEmp(manufacturingEmpIn), workDpmt(workDpmtIn)
	{
	}
	
	// Set Functions for PersonalInfo objects
	void setFirstName(string);
	void setLastName(string);
	void setAge(string);
	void setPhNum(string);

	// Set Functions for Employer objects
	void setRecord(int);
	void setWorkPhn(string);
	void setWkDpmt();

	// Get Functions for PersonalInfo objects
	string getFirstName();
	string getLastName();
	string getAge();
	string getPhNum();	

	// Get Functions for Employer objects
	int getRecord();
	string getWorkPhn();
	string getWkDpmt();
};

#endif /* RECORD_H */