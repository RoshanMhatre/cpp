/* Author: Rodney Nedlose
 * Date: 8.1.19
 * File:   Main.cpp
 * Purpose: Employee Info Data Entry and Retrieval Program for
 * Business to easily enter and retrieve individual Employee
 * Information as needed.
 * Input: Data Values from user passed to Objects of Helper type.
 * Output: Data values returned from Objects of Helper type.
 * Exceptions: Basic exception handling used.
 */

#include<cstdlib>
#include<iostream>
#include<string>
#include<vector>
#include "Employee.h"
#include "Helper.h"

using namespace std;

int main(){
    try{

        // Some variables needed.
        int choice;
        vector<Employee> emps;

        // Create our helper object.
        Helper h = Helper();
        do {

            // Main menu.        
            cout << "\n\tEmployee Information Program." << endl;
            cout << "\n\tPlease choose from the options below." << endl;
            cout << "\t1 Enter in new Employees.\n"
                << "\t2 Search for a specific Employee by Last Name.\n"
                << "\t3 Export entered Employees to text file.\n"
                << "\t4 Exit the program.\n" << endl;

                cin >> choice;

                if (choice == 1){
                    emps = h.inputEmployees(emps);                    

                }else if (choice == 2){
                    emps = h.searchEmployees(emps);

                }else if (choice == 3){
                    h.writeToFile(emps);
                }

        } while (choice != 4);

        return 0;

    }catch(exception ex){
        cout << ex.what() << endl;
    }
}
