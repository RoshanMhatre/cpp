/* Author: Rodney Nedlose
 * Date: 7.15.19
 * File:   Person.cpp
 * Purpose: Method declarations for the Person Class.
 * Input: Uses Employer and PersonalInfo Objects as member variables.
 * Output: None.
 * Exceptions: None.
 */

#include "Person.h"
#include <string>

// Set Functions for PersonalInfo
void Person:: setFirstName(string fNameIn)
{
	pInfo.setFirstName(fNameIn);
}
void Person:: setLastName(string lNameIn)
{
	pInfo.setLastName(lNameIn);
}
void Person:: setAge(string ageIn)
{
	pInfo.setAge(ageIn);
}
void Person:: setPhNum(string phNumIn)
{
	pInfo.setPhoneNum(phNumIn);
}

// Set Functions for Employer
void Person:: setRecord(int recordIn)
{
	employer.setRecordNum(recordIn);
}
void Person:: setEmpDpmt(string dpmtIn)
{
	employer.setEmpDpmt(dpmtIn);
}
void Person:: setWorkPhn(string pNumIn)
{
	employer.setWorkPhone(pNumIn);
}

// Get Functions for PersonalInfo
string Person:: getFirstName()
{
	return pInfo.getFirstName();
}
string Person:: getLastName()
{
	return pInfo.getLastName();
}
string Person:: getAge()
{
	return pInfo.getAge();
}
string Person:: getPhNum()
{
	return pInfo.getPhoneNum();
}

// Get Functions for Employer
int Person:: getRecord()
{
	return employer.getRecordNum();
}
string Person:: getEmpDpmt()
{
	return employer.getWorkDpmt();
}
string Person:: getWorkPhn()
{
	return employer.getWorkPhn();
}