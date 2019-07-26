/* Author: Rodney Nedlose
 * Date: 7.25.19
 * File:   ManufacturingEmp.cpp
 * Purpose: Method declarations for the ManufacturingEmp Child Class.
 * Input: 
 * Output: 
 * Exceptions: None.
 */

#include "ManufacturingEmp.h"
#include <string>

void ManufacturingEmp:: setRecordNum(int recordIn)
{
    recordNum = recordIn;
}
void ManufacturingEmp:: setWorkPhone(string phNumIn)
{
    workPhNum = phNumIn;
}
void ManufacturingEmp:: setDepartment()
{
    workDpmt = "Manufacturing Employer";
}

int ManufacturingEmp:: getRecordNum()
{
    return recordNum;
}
string ManufacturingEmp:: getWorkPhone()
{
    return workPhNum;
}
string ManufacturingEmp:: getDepartment()
{
    return workDpmt;
}