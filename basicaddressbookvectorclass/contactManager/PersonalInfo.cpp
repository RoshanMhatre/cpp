/* Author: Rodney Nedlose
 * Date: 7.15.19
 * File:   PersonalInfo.cpp
 * Purpose: Method declarations for the PersonalInfo Class.
 * Input: 
 * Output: 
 * Exceptions: None.
 */

#include "PersonalInfo.h"
#include <string>

 // Set Function Declarations

void PersonalInfo::setFirstName(string fNameIn)
{
	firstName = fNameIn;
}
void PersonalInfo::setLastName(string lNameIn)
{
	lastName = lNameIn;
}
void PersonalInfo::setAge(string ageIn)
{
	age = ageIn;
}
void PersonalInfo::setPhoneNum(string pNumIn)
{
	phoneNum = pNumIn;
}

// Get Function Declarations

string PersonalInfo::getFirstName()
{
	return firstName;
}
string PersonalInfo::getLastName()
{
	return lastName;
}
string PersonalInfo::getAge()
{
	return age;
}
string PersonalInfo::getPhoneNum()
{
	return phoneNum;
}