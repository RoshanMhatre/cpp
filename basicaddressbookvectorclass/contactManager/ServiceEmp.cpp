/* Author: Rodney Nedlose
 * Date: 7.25.19
 * File:   ServiceEmp.cpp
 * Purpose: Method declarations for the ServiceEmp Child Class.
 * Input: 
 * Output: 
 * Exceptions: None.
 */

#include "ServiceEmp.h"
#include <string>

void ServiceEmp:: setRecordNum(int recordIn)
{
    recordNum = recordIn;
}
void ServiceEmp:: setWorkPhone(string phNumIn)
{
    workPhNum = phNumIn;
}
void ServiceEmp:: setDepartment()
{
    workDpmt = "Service Employer";
}

int ServiceEmp:: getRecordNum()
{
    return recordNum;
}
string ServiceEmp:: getWorkPhone()
{
    return workPhNum;
}
string ServiceEmp:: getDepartment()
{
    return workDpmt;
}