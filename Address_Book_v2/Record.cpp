/* Author: Rodney Nedlose
 * Date: 7.1.19
 * File:   Record.cpp
 * Purpose: Method declarations for the Record Class.
 * Input: None.
 * Output: None.
 * Exceptions: None.
 */


#include "Record.h"
#include <string>

 // Set Function Declarations

void Record::setRecordNum(int recordIn)
{
	recordNum = recordIn;
}
void Record::setFirstName(string fNameIn)
{
	firstName = fNameIn;
}
void Record::setLastName(string lNameIn)
{
	lastName = lNameIn;
}
void Record::setAge(string ageIn)
{
	age = ageIn;
}
void Record::setPhoneNum(string pNumIn)
{
	phoneNum = pNumIn;
}

// Get Function Declarations

int Record::getRecordNum()
{
	return recordNum;
}
string Record::getFirstName()
{
	return firstName;
}
string Record::getLastName()
{
	return lastName;
}
string Record::getAge()
{
	return age;
}
string Record::getPhoneNum()
{
	return phoneNum;
}
