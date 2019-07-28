/* Author: Rodney Nedlose
 * Date: 7.25.19
 * File:   Person.cpp
 * Purpose: Method declarations for the Person Class.
 * Input: Uses Employer and Employer child classes
 * SalesEmp, ServiceEmp, and ManufacturingEmp as well
 * as PersonalInfo Objects as member variables.
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

// Set Functions for Employer and sub-types of Employer
void Person:: setRecord(int recordIn)
{
	employer.setRecordNum(recordIn);
}
void Person:: setWorkPhn(string pNumIn)
{
	employer.setWorkPhone(pNumIn);
}
void Person:: setWkDpmt()
{
	employer.setDepartment();
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

// Get Functions for Employer and child classes of Employer
// If Else If decision structure used to determine which method
// to call within these methods.
int Person:: getRecord()
{
	if(workDpmt == "Sales" || workDpmt == "sales")
	{
		return salesEmp.getRecordNum();
	}
	else if(workDpmt == "Service" || workDpmt == "service")
	{
		return serviceEmp.getRecordNum();
	}
	else if(workDpmt == "Manufacturing" || workDpmt == "manufacturing")
	{
		return manufacturingEmp.getRecordNum();
	}
	else
	{
		return employer.getRecordNum();
	}
	
}
string Person:: getWorkPhn()
{
	if(workDpmt == "Sales" || workDpmt == "sales")
	{
		return salesEmp.getWorkPhone();
	}
	else if(workDpmt == "Service" || workDpmt == "service")
	{
		return serviceEmp.getWorkPhone();
	}
	else if(workDpmt == "Manufacturing" || workDpmt == "manufacturing")
	{
		return manufacturingEmp.getWorkPhone();
	}
	else
	{
		return employer.getWorkPhone();
	}
	
}
string Person:: getWkDpmt()
{
	if(workDpmt == "Sales" || workDpmt == "sales")
	{
		return salesEmp.getDepartment();
	}
	else if(workDpmt == "Service" || workDpmt == "service")
	{
		return serviceEmp.getDepartment();
	}
	else if(workDpmt == "Manufacturing" || workDpmt == "manufacturing")
	{
		return manufacturingEmp.getDepartment();
	}
	else
	{
		return employer.getDepartment();
	}
	
}