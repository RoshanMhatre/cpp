
/* Author: Rodney Nedlose
 * Date: 7.25.19
 * File:   ContactManager.cpp
 * Purpose: Store records of people including record
 * number, first and last names, phone number, age, employer
 * department, and work phone number
 * This version uses the built in class vector<> instead
 * of a basic C style array.  Implemented basic exception
 * handling as well with a Try-Catch block.  Changed Record class 
 * to Person class, and broke out PersonalInfo into it's own
 * class as well as Employer information in a separate class.
 * Added child classes of the Employer class: SalesEmp, ServiceEmp
 * and ManufacturingEmp.  Added decision structures in order to
 * have program decide which child class of Employer to use.  Added
 * a flag of a sort for program to know which methods in the Person
 * class to call for individual Person objects in our vector.  Changed
 * Person object instantiation to used constructor based on Employer
 * type chosen.  Program now instantiates objects of sub-types before
 * using sub-type objects to instantiate Person objects.
 * Input: User input for records in a menu style
 * Output: Display each persons information in console for User.
 * Exceptions: None.
 */

#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <exception>
#include "Person.h"
#include "Employer.h"
#include "SalesEmp.h"
#include "ServiceEmp.h"
#include "ManufacturingEmp.h"

using namespace std;

int main()
{
	// Try Block for exception handling
	try
	{
		// Vector of type Person
		vector<Person> People;

		// Used for Menu.
		string choice;

		// Used to determine how many people to enter
		int numPeople = 0;
	
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
				cout << "\t1 Enter in information for people.\n"
					"\t2 Display all people.\n"
					"\t3 Exit the program." << endl;

				cin >> choice;
		
				// Enter in the people.
				if (choice == "1")
				{

					cout << "\n\tHow many people do you want to enter?" << endl;

					cin >> numPeople;

					// For loop for iterative record entry.
					for (int i = 0; i < numPeople; i++) 
					{
						// Variables for record entry.
						string fName;
						string lName;
						string age;
						string phNum;

						// Gather data from User for each variable needed to create
						// our Person Employer objects.
						int rNum;
						string empType;
						string wkPhNum;

						// Instantiate our personalInfo object
						PersonalInfo pI = PersonalInfo();
						
						// Gather data from User for each variable needed
						// to construct our Person PersonalInfo objects.
						cout << "\tFirst enter in the personal information." << endl;
						cout << "\n\tWhat is the first name: " << endl;
						cin >> fName;
						cout << "\tWhat is the last name: " << endl;
						cin >> lName;
						cout << "\tWhat is the persons age: " << endl;
						cin >> age;
						cout << "\tWhat is the persons personal phone number: " << endl;
						cin >> phNum;
						
						// Set variables inside our personalInfo object
						pI.setFirstName(fName);
						pI.setLastName(lName);
						pI.setAge(age);
						pI.setPhoneNum(phNum);


						// Generate a random integer for record number.
						rNum = rand() % 10000;

						cout << "\tNow, enter in the work information." << endl;
						cout << "\n\tWhat kind of work does the person work do " << endl;
						cout << "\n\t(Enter sales, service, or manufacturing): " << endl;
						cin >> empType;
						cout << "\tWhat is the persons work phone number: " << endl;
						cin >> wkPhNum;

						// Determine which type of employer object to instantiate.
						if (empType == "sales" || empType == "Sales")
						{
							// Instantiate SalesEmp object
							SalesEmp salesEmp = SalesEmp();
							salesEmp.setRecordNum(rNum);
							salesEmp.setWorkPhone(wkPhNum);
							salesEmp.setDepartment();
							// Instantiate Person object
							Person p = Person(pI, salesEmp, empType);
							// Add Person object to vector
							People.push_back(p);
						}
						else if (empType == "service" || empType == "Service")
						{
							// Instantiate ServiceEmp object
							ServiceEmp serviceEmp = ServiceEmp();
							serviceEmp.setRecordNum(rNum);
							serviceEmp.setWorkPhone(wkPhNum);
							serviceEmp.setDepartment();
							// Instantiate Person object
							Person p = Person(pI, serviceEmp, empType);
							// Add Person object to vector
							People.push_back(p);
						}
						else if (empType == "manufacturing" || empType == "manufacturing")
						{
							// Instantiate ManufacturingEmp object
							ManufacturingEmp manufactEmp = ManufacturingEmp();
							manufactEmp.setRecordNum(rNum);
							manufactEmp.setWorkPhone(wkPhNum);
							manufactEmp.setDepartment();
							// Instantiate Person object
							Person p = Person(pI, manufactEmp, empType);
							// Add Person object to vector
							People.push_back(p);
						}
						else
						{
							// Instantiate default Employer type object
							Employer emp = Employer();
							emp.setRecordNum(rNum);
							emp.setWorkPhone(wkPhNum);
							emp.setDepartment();
							// Instantiate Person object
							Person p = Person(pI, emp);
							// Add Person object to vector
							People.push_back(p);
						}
					}
				}

				// Display entered People on screen.
				else if (choice == "2")
				{
					
					// Checks to see if the vector is empty or not.
					// If it is empty, display a message to alert
					// User that some people must be entered prior to
					// Using this option in the menu.
					if (People.empty())
					{
						cout << "\n\tThere are no people to show.  Please enter some people first." << endl;
					}
					else
					{
						// For loop to iterate through the People vector
						// and display each person in a formatted fashion
						// for easier reading.
						for (int i = 0; i < People.size(); i++)
						{
							// Within the cout block each get method from the
							// Person class is called to display each records
							// data.

							cout << "\n\tRecord Number: " << People[i].getRecord()
								<< "\n\tFirst Name: " << People[i].getFirstName()
								<< "\n\tLast Name: " << People[i].getLastName()
								<< "\n\tAge: " << People[i].getAge()
								<< "\n\tPhone Number: " << People[i].getPhNum()
								<< "\n\tWork Department: " << People[i].getWkDpmt()
								<< "\n\tWork Phone Number: " << People[i].getWorkPhn() 
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