
/* Author: Rodney Nedlose
 * Date: 7.5.19
 * File:   BasicAddressBookVector.cpp
 * Purpose: Store records of people including record
 * number, first and last names, phone number, and age.
 * This version uses the built in class vector<> instead
 * of a basic C style array.  Implemented basic exception
 * handling as well with a Try-Catch block.
 * Input: User input for records in a menu style
 * Output: Display each records information in console for User.
 * Exceptions: None.
 */



#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <exception>
#include "Record.h"

using namespace std;


int main()
{
	// Try Block for exception handling
	try
	{
		// Vector of type Record
		vector<Record> Records;

		// Used for Menu.
		string choice;

		// Used to determine how many records to enter
		int numRecords = 0;
	
		// Try block for specific out of range exception
		try
		{

			// Using a Do-While loop as the outer loop
			// to display the menu repeatedly.
			do
			{
				// Menu.
				cout << "\tThis is a Basic Address Book Program." << endl;
				cout << "\tPlease enter the number for your choice." << endl;
				cout << "\t1 Enter in new records.\n"
					"\t2 Display all records.\n"
					"\t3 Exit the program." << endl;

				cin >> choice;
		
				// Enter in the records.
				if (choice == "1")
				{

					cout << "\n\tHow many records do you want to enter?" << endl;

					cin >> numRecords;

					// For loop for iterative record entry.
					for (int i = 0; i < numRecords; i++) 
					{
						// Variables for record entry.
						int rNum;
						string fName;
						string lName;
						string rAge;
						string phNum;

						// Generate a random integer for record number.
						rNum = rand() % 10000;

						// Gather data from User for each variable needed
						// to construct our Record objects.
						cout << "\tWhat is the first name: " << endl;
						cin >> fName;
						cout << "\tWhat is the last name: " << endl;
						cin >> lName;
						cout << "\tWhat is the persons age: " << endl;
						cin >> rAge;
						cout << "\tWhat is the persons phone number: " << endl;
						cin >> phNum;
					
						// Takes input and creates object of Record type with the
						// overriden contstructor in the Record class and stores
						// the created object in the Records vector.
						Record r = Record(rNum, fName, lName, rAge, phNum);
						Records.push_back(r);
					}
				}

				// Display entered Records on screen.
				else if (choice == "2")
				{
					
					// Checks to see if the vector is empty or not.
					// If it is empty, display a message to alert
					// User that records must be entered prior to
					// Using this option in the menu.
					if (Records.empty())
					{
						cout << "\n\tThere are no records to show.  Please enter some records first." << endl;
					}
					else
					{
						// For loop to iterate through the Records vector
						// and display each record in a formatted fashion
						// for easier reading.
						for (int i = 0; i < Records.size(); i++)
						{
							// Within the cout block each get method from the
							// Record class is called to display each records
							// data.
							cout << "\n\tRecord Number: " << Records[i].getRecordNum()
								<< "\n\tFirst Name: " << Records[i].getFirstName()
								<< "\n\tLast Name: " << Records[i].getLastName()
								<< "\n\tAge: " << Records[i].getAge()
								<< "\n\tPhone Number: " << Records[i].getPhoneNum() 
								<< "\n" << endl;
						}
					}
				}
	
			// This is the Do-While condition.
			} while (choice != "3");

		}
		// Catch block to catch specific out of range error.
		catch (range_error re)
		{
			cout << re.what() << endl;
		}
	}

	// Catch block if an exception is thrown.
	catch(exception e)
	{
		cout << e.what() << endl;
	}
return 0;
}
