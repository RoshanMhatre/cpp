/* Author: Rodney Nedlose
 * Date: 7.15.19
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
void Employer:: setEmpDpmt(string dpmtIn)
{
    empDepartment = dpmtIn;
}
void Employer:: setWorkPhone(string phNumIn)
{
    workPhNum = phNumIn;
}

// Get Functions

int Employer:: getRecordNum()
{
    return recordNum;
}
string Employer:: getWorkDpmt()
{
    return empDepartment;
}
string Employer:: getWorkPhn()
{
    return workPhNum;
}