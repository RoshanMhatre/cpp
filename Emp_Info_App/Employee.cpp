/* Author: Rodney Nedlose
 * Date: 8.1.19
 * File:   Employee.cpp
 * Purpose: Function Definitions for Class Employee
 * Input:  Data values set for Class Employee Fields.
 * Output: Data values retrieved by get functions
 * and returned to the caller.
 * Exceptions: None.
 */

#include "Employee.h"


// Set Function Definitions for Employee Class
void Employee::setFname(string fNameIn){
    fName = fNameIn;
}

void Employee::setMname(string mNameIn){
    mName = mNameIn;
}

void Employee::setLname(string lNameIn){
    lName = lNameIn;
}

void Employee::setAge(string ageIn) {
    age = ageIn;
}

void Employee::setHphone(string hPhoneIn){
    hPhone = hPhoneIn;
}

void Employee::setWphone(string wPhoneIn){
    wPhone = wPhoneIn;
}

void Employee::setHemail(string hEmailIn){
    hEmail = hEmailIn;
}

void Employee::setWemail(string wEmailIn){
    wEmail = wEmailIn;
}

void Employee::setHaddress(string hAddressIn){
    hAddress = hAddressIn;
}

void Employee::setIDnum(int idNumIn){
    idNum = idNumIn;
}

// Get Function Definitions for Employee Class

string Employee::getFname(){
    return fName;
}

string Employee::getMname(){
    return mName;
}

string Employee::getLname(){
    return lName;
}

string Employee::getAge(){
    return age;
}

string Employee::getHphone(){
    return hPhone;
}

string Employee::getWphone(){
    return wPhone;
}

string Employee::getHemail(){
    return hEmail;
}

string Employee::getWemail(){
    return wEmail;
}

string Employee::getHaddress(){
    return hAddress;
}

int Employee::getIDnum(){
    return idNum;
}