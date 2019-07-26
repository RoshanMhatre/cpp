/* Author: Rodney Nedlose
 * Date: 7.25.19
 * File:   SalesEmp.cpp
 * Purpose: Method declarations for the SalesEmp Child Class.
 * Input: 
 * Output: 
 * Exceptions: None.
 */

#include "SalesEmp.h"
#include <string>

void SalesEmp:: setRecordNum(int recordIn)
{
    recordNum = recordIn;
}
void SalesEmp:: setWorkPhone(string phNumIn)
{
    workPhNum = phNumIn;
}
void SalesEmp:: setDepartment()
{
    workDpmt = "Sales Employer";
}

int SalesEmp:: getRecordNum()
{
    return recordNum;
}
string SalesEmp:: getWorkPhone()
{
    return workPhNum;
}
string SalesEmp:: getDepartment()
{
    return workDpmt;
}