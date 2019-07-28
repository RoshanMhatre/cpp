/* Author: Rodney Nedlose
 * Date: 7.23.19
 * File:   Employer.cpp
 * Purpose: Method declarations for the Employer Class.
 * Input: 
 * Output: 
 * Exceptions: None.
 */

#include "Employer.h"
#include <string>

// Set Functions

void Employer:: setRecordNum(int recordIn)
{
    recordNum = recordIn;
}
void Employer:: setWorkPhone(string phNumIn)
{
    workPhNum = phNumIn;
}
void Employer:: setDepartment()
{
    workDpmt = "General Employee";
}

// Get Functions

int Employer:: getRecordNum()
{
    return recordNum;
}
string Employer:: getWorkPhone()
{
    return workPhNum;
}
string Employer:: getDepartment()
{
    return workDpmt;
}