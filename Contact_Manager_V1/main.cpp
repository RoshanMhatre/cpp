/* Author: Rodney Nedlose
 * Date: 05/27/2019
 * File:   main.cpp
 * Purpose: Store names and phone numbers for 10 people.
 * Input: User input for 10 peoples names and phone numbers and add to parallel
 * arrays. User input to search for a specific name.
 * Output: Print list of users and phone numbers.  Search for a previously input
 * name and print either name and phone number, or let the user know that name
 * is not in the list.
 * Exceptions: None.
 */


#include <cstdlib>
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

const string UNDERLINE = "__________________________________________________";

int i = -1; // index variable for loops
int p = -1; // pass variable for sorting

string temp = ""; // temp variable for swapping
string temp2 = ""; // secondary temp variable for swapping

string search = ""; // search variables
bool found = false;

string arr[3]; // Parallel arrays for storing user input for names
string arr2[3]; // and associated phone numbers.

// Function to gather data from User
void inputData() {
    for (i = 0; i < 3; i++) {

        cout << "Please enter the name:" << endl;
        cin >> arr[i];
        cin.ignore();
        cout << "Please enter the phone number:" << endl;
        cin >> arr2[i];
        cin.ignore();
    }
}

// Function to print the User Inputted Data
void printData() {
    cout << UNDERLINE << "\n" << endl;

    cout << setw(50) << "Here is the sorted list of people (By Phone Number)\n" << endl;

    cout << UNDERLINE << "\n" << endl;

    for (i = 0; i < 3; i++) {
        cout << left << setw(25) << arr[i] << setw(25) << arr2[i] << "\n" << endl;
    }
    
}

int main(int argc, char** argv) {



    cout << "This is a simple contact manager program.  Please \n"
            "enter in 3 people's names and associated phone numbers:" << endl;



    for (p = 0; p < 3; p++) { // Bubble sort ascending for both arrays as they are
        // parallel.        
        for (i = 0; i < 3 - p; i++) {

            if (arr2[i] > arr2[i + 1]) {

                temp = arr2[i];
                temp2 = arr[i];
                arr2[i] = arr2[i + 1];
                arr[i] = arr[i + 1];
                arr2[i + 1] = temp;
                arr[i + 1] = temp2;
            }
        }
    }

    

    cout << UNDERLINE << "\n" << endl;

    cout << "Please enter a name to search for in the list:" << endl;

    cin>>search;

    for (i = 0; i < 3; i++) {

        if (arr[i] == search) {

            found = true;

            break;
        }
    }
    if (found) {

        cout << UNDERLINE << "\n" << endl;

        cout << setw(25) << arr[i] << setw(25) << arr2[i] << endl;

        cout << UNDERLINE << "\n" << endl;
    } else {

        cout << UNDERLINE << "\n" << endl;

        cout << "The name you searched for was not found." << endl;

        cout << UNDERLINE << "\n" << endl;
    }

    return 0;
}

