/* Author: Rodney Nedlose
 * Date: 6/14/2019
 * File:   main.cpp
 * Purpose: Store names and phone numbers for people in a file.
 * Input: User input for people's phone numbers
 * Output: Output to a file that stores input information for future use and
 * searching.
 * Exceptions: None.
 */

#include <cstdlib>
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

// Global Variables for the program
const string UNDERLINE = "_____________________________________________________";
const int SIZE = 5;

int userChoice = -1; // for the while loop to keep the program running

string names[SIZE]; // parallel arrays for storing our contact info
string phones[SIZE]; // initialized to the constant size

// Function to get data from the User

void inputContacts() {
    cin.ignore();
    for (int i = 0; i < SIZE; i++) { // loop through 5 times to get 5 contacts
        cout << "Please enter contact name: " << endl;
        getline(cin, names[i]);
        cout << "Please enter contact phone number: " << endl;
        cin >> phones[i];
        cin.ignore();
    }
}

// Function to search for a contact by name

void searchContacts(string arr[], string arr2[], int n) {
    string search = ""; // search variable
    bool found;
    cin.ignore();
    cout << "Please enter the name of the contact you wish to search for: " << endl;
    getline(cin, search);
    for (int i = 0; i < n; i++) {
        if (arr[i] == search) {
            cout << UNDERLINE << endl;
            cout << right << setw(25) << arr[i] <<
                    right << setw(25) << arr2[i] << endl;
            cout << UNDERLINE << endl;
            found = true;
            break;
        }

    }
    if (!found) {
        cout << "Contact not found." << endl;
    }


}
// Contacts Sort Ascending Function

void bubbleSortA(string arr[], string arr2[], int n) {
    for (int j = 0; j < n; j++) {
        for (int i = 0; i < n - j - 1; i++) {
            if (arr2[i] > arr2[i + 1]) {
                swap(arr[i], arr[i + 1]);
                swap(arr2[i], arr2[i + 1]);
            }
            continue;
        }

    }

}

// Contacts Sort Descending Function

void bubbleSortD(string arr[], string arr2[], int n) {
    for (int j = 0; j < n; j++) {
        for (int i = 0; i < n - j - 1; i++) {
            if (arr2[i] < arr2[i + 1]) {
                swap(arr[i], arr[i + 1]);
                swap(arr2[i], arr2[i + 1]);
            }
            continue;
        }

    }

}

// Swap function

void swap(string x, string y) {
    string temp = x;
    x = y;
    y = temp;
}

// Function to print out list of inputted contacts

void printContacts(string arr[], string arr2[], int n) {
    cout << UNDERLINE << endl;

    for (int i = 0; i < n; i++) {
        cout << right << setw(25) << arr[i] <<
                right << setw(25) << arr2[i] << endl;
    }
    cout << UNDERLINE << endl;
}

// Main Function

int main(int argc, char** argv) {

    do { // This is the program menu.
        cout << "Welcome to your personal contact book program!" << endl;
        cout << "Please enter the number for your choice." << endl;
        cout << "1 Enter in 5 new contacts\n"
                "2 Search for a contact\n"
                "3 Sort and print contacts in Ascending order\n"
                "4 Sort and print contacts in Descending order\n"
                "5 Exit the program." << endl;

        cin>>userChoice;

        if (userChoice == 1) { // enter in contact info
            inputContacts();

        } else if (userChoice == 2) { // search for a contact and edit or delete
            searchContacts(names, phones, SIZE);

        } else if (userChoice == 3) { // Print out contacts and sort contacts ascending
            bubbleSortA(names, phones, SIZE);
            printContacts(names, phones, SIZE);

        } else if (userChoice == 4) { // Print out contacts and sort contacts descending
            bubbleSortD(names, phones, SIZE);
            printContacts(names, phones, SIZE);
        }
    } while (userChoice != 5);

    return 0;

}
