
/* Author: Rodney Nedlose
 * Date: 8.1.19
 * File:   Helper.h
 * Purpose: Function Declarations for Class Helper
 * Input: None.
 * Output: None.
 * Exceptions: None.
 */

#pragma once

#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <exception>
#include<bits/stdc++.h>
#include "Employee.h"

using namespace std;

#ifndef HELPER_H
#define HELPER_H

class Helper {

    private:
        // Fields for Helper objects.
        string searchName;
        int numEmployees;
        string fNameIn;
        string mNameIn;
        string lNameIn;
        string ageIn;
        string hPhoneIn;
        string wPhoneIn;
        string hEmailIn;
        string wEmailIn;
        string hAddressIn;
        int randNum;
        vector<Employee> Employees;


    public:
        // Constructor for Helper objects.
        Helper(){

        }

        // Methods/Functions for Helper objects.
        vector<Employee> inputEmployees(vector<Employee> emps);
        vector<Employee> searchEmployees(vector<Employee> emps);
        void displayEmployee(Employee emp);
        Employee editEmployee(Employee emp);
        void writeToFile(vector<Employee> emps);

};

#endif /* HELPER_H */