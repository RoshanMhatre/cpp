/* Author: Rodney Nedlose
 * Date: 8.1.19
 * File:   Employee.h
 * Purpose: Header file for field and function declarations for Class Employee.
 * Input:  None.
 * Output: None.
 * Exceptions: None.
 */

#pragma once

#include<cstdlib>
#include<string>
#include<iostream>

using namespace std;

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

class Employee {

    private:
        // Fields for class Employee
        string fName;
        string mName;
        string lName;
        string age;
        string hPhone;
        string wPhone;
        string hEmail;
        string wEmail;
        string hAddress;
        int idNum;


    public:

        // Default Constructor
        Employee()
        {
        }
        // @overload Constructor
        Employee(string fNameIn, string mNameIn, string lNameIn, string ageIn, 
                string hPhoneIn, string wPhoneIn, string hEmailIn, string wEmailIn,
                string hAddressIn, int idNumIn)
                :fName(fNameIn), mName(mNameIn), lName(lNameIn),age(ageIn),
                hPhone(hPhoneIn), wPhone(wPhoneIn), hEmail(hEmailIn),
                wEmail(wEmailIn), hAddress(hAddressIn), idNum(idNumIn)
        {
        }

        // Set Function Declarations for Employee Class
        void setFname(string fNameIn);
        void setMname(string mNameIn);
        void setLname(string lNameIn);
        void setAge(string ageIn);
        void setHphone(string hPhoneIn);
        void setWphone(string wPhoneIn);
        void setHemail(string hEmailIn);
        void setWemail(string wEmailIn);
        void setHaddress(string hAddressIn);
        void setIDnum(int idNumIn);

        // Get Function Declarations for Employee Class
        string getFname();
        string getMname();
        string getLname();
        string getAge();
        string getHphone();
        string getWphone();
        string getHemail();
        string getWemail();
        string getHaddress();
        int getIDnum();


};

#endif /* EMPLOYEE_H */