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
        string choice;

        Helper h = Helper();
        do {

        
            cout << "\n\tEmployee Information Program." << endl;
            cout << "\n\tPlease choose from the options below." << endl;
            cout << "\t1 Enter in new Employees.\n"
                << "\t2 Search for a specific Employee by Last Name.\n"
                << "\t3 Export entered Employees to text file.\n"
                << "\t4 Exit the program.\n" << endl;

                cin >> choice;

                if (choice == 1){

                    

                }else if (choice == 2){

                }else if (choice == 3){

                }


        } while (choice != 4);

        return 0;

    }catch(exception ex){
        cout << ex.what() << endl;
    }
















}