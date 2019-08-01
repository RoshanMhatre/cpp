/* Author: Rodney Nedlose
 * Date: 8.1.19
 * File:   Helper.cpp
 * Purpose: Function Definitions for Class Helper
 * Input:  Data values from User to create objects of Employee
 * type and add them to a vector of Employee objects.  Input 
 * value to search through the vector and find previously entered
 * data for editing.
 * Output: Data values searched and retrieved for editing or 
 * retrieval to the caller.
 * Exceptions: Basic exception handling used.
 */

#include "Helper.h"

vector<Employee> Helper::inputEmployees(){
    // Try catch block for unforeseen exception catching.
    try{    

        // Create a vector to be returned to caller after data entry.
        vector<Employee> employees;
        
        // Message to user to enter how many employees need to be entered.
        cout << "\n\tHow many new employees need to be entered?" << endl;
        cin >> numEmployees;

        // For loop to get data for each employee to be entered
        for (int i = 0; i < numEmployees; i++)
        {
            cout << "\n\tEnter Information as prompted." << endl;
            cout << "\n\tFirst Name: " << endl;
            cin >> fNameIn;
            cout << "\n\tMiddleName: " << endl;
            cin >> mNameIn;
            cout << "\n\tLast Name: " << endl;
            cin >> lNameIn;
            cout << "\n\tAge: " << endl;
            cin >> ageIn;
            cout << "\n\tHome Phone: " << endl;
            cin >> hPhoneIn;
            cout << "\n\tWork Phone: " << endl;
            cin >> wPhoneIn;
            cout << "\n\tHome Email: " << endl;
            cin >> hEmailIn;
            cout << "\n\tWork Email: " << endl;
            cin >> wEmailIn;
            cout << "\n\tHome Address: " << endl;
            cin >> hAddressIn;

            // Generate random number from 1-100000 for and Employee ID number.
            randNum = rand() %100000;

            // Instantiate an object of Employee type.
            Employee e = Employee(fNameIn, mNameIn,lNameIn,ageIn,hPhoneIn,wPhoneIn,
            hEmailIn,wEmailIn,hAddressIn,randNum);

            // Add Employee object to end of the vector.
            employees.push_back(e);
        }

        // Return the vector to caller.
        return employees;

    }catch(exception ex)
    {
        // If an exception occurs, print out what it was.
        cout << ex.what() << endl;
    }

}

vector<Employee> Helper::searchEmployees(vector<Employee> emps){
    // Basic try catch block for unforeseen exceptions.
    try{
        
        // Variables for use in the search function.
        string tempName;
        char answer;
        bool flag;

        // Helper object to utilize Helper functions within this Helper function
        Helper h = Helper();

        // Prompt user for a last name to search for.
        cout << "\n\tSearch for an employee." << endl;
        cout << "\n\tPlease enter the last name of the employee you are searching for: " << endl;
        cin >> searchName;

        // Changes all characters entered to lower case for easier searching.
        transform(searchName.begin(), searchName.end(),searchName.begin(),::tolower);

        // For loop to iterate through the passed in vector.
        for (int i = 0; i < emps.size(); i++){

            // Assign each Employee object's last name to our temp variable during iteration.
            tempName = emps[i].getLname();

            // Changes all characters in temp variable to lower case for easier matching with search name.
            transform(tempName.begin(), tempName.end(), tempName.begin(),::tolower);

            // If statement to check temp variable against searched for name each iteration
            if (tempName == searchName){

                // Flag boolean variable assigned to true if searched for name is found in vector
                // This allows the program to call other functions if desired and break out of the 
                // for loop afterwards.
                flag = true;
                if (flag) {
                    cout << "\n\tEmployee Found." << endl;

                    // Ask user whether or not desire to display found employee.
                    cout << "\n\tDisplay employee?(enter y for yes or n for no.): " << endl;
                    cin >> answer;
                    if (answer == 'y' || answer == 'Y'){
                        h.displayEmployee(emps[i]);
                    }else{

                        // Ask user whether or not desire to edit found employee.
                        cout << "\n\tEdit employee?(enter y for yes or n for no.): " << endl;
                        cin.ignore();
                        cin >> answer;
                        if (answer == 'y' || answer == 'Y'){
                            h.editEmployee(emps[i]);
                        }
                    }

                }
                break;
            }else{
                cout << "\n\tEmployee not found" << endl;
            }

        }
        return emps;
    }catch (exception ex){
        cout << ex.what() << endl;
    }

}

void Helper::displayEmployee(Employee emp){

    // Prints out all fields for passed in Employee object.
    cout << "\t" << emp.getFname() << "\n" <<
        "\t" << emp.getMname() << "\n" <<
        "\t" << emp.getLname() << "\n" <<
        "\t" << emp.getAge() << "\n" <<
        "\t" << emp.getHphone() << "\n" <<
        "\t" << emp.getWphone() << "\n" <<
        "\t" << emp.getHemail() << "\n" <<
        "\t" << emp.getWemail() << "\n" <<
        "\t" << emp.getHaddress() << "\n" <<
        "\t" << emp.getIDnum() << "\n" << endl;
}

void Helper::editEmployee(Employee emp){

    char answer;

    // Allows editing of most fields of passed in Employee object.
    cout<< "\n\tEnter Y or y to change prompted field." << endl;
    cout << "\n\tChange First Name: " << endl;
    cin >> answer;
    if(answer == 'y' || answer == 'Y'){
        cin >> fNameIn;
        emp.setFname(fNameIn);
    }
    cin.ignore();
    cout << "\n\tChange Middle Name: " << endl;
        cin >> answer;
    if(answer == 'y' || answer == 'Y'){
        cin >> mNameIn;
        emp.setMname(mNameIn);
    }
    cin.ignore();

    cout << "\n\tChange Last Name: " << endl;
        cin >> answer;
    if(answer == 'y' || answer == 'Y'){
        cin >> lNameIn;
        emp.setLname(lNameIn);
    }
    cin.ignore();

    cout << "\n\tChange Age: " << endl;
        cin >> answer;
    if(answer == 'y' || answer == 'Y'){
        cin >> ageIn;
        emp.setAge(ageIn);
    }
    cin.ignore();

    cout << "\n\tChange Home Phone Number: " << endl;
        cin >> answer;
    if(answer == 'y' || answer == 'Y'){
        cin >> hPhoneIn;
        emp.setHphone(hPhoneIn);
    }
    cin.ignore();

    cout << "\n\tChange Work Phone Number: " << endl;
        cin >> answer;
    if(answer == 'y' || answer == 'Y'){
        cin >> wPhoneIn;
        emp.setWphone(wPhoneIn);
    }
    cin.ignore();

    cout << "\n\tChange Home Email Address: " << endl;
        cin >> answer;
    if(answer == 'y' || answer == 'Y'){
        cin >> hEmailIn;
        emp.setHemail(hEmailIn);
    }
    cin.ignore();

    cout << "\n\tChange Work Email Address: " << endl;
        cin >> answer;
    if(answer == 'y' || answer == 'Y'){
        cin >> wEmailIn;
        emp.setWemail(wEmailIn);
    }
    cin.ignore();

    cout << "\n\tChange Home Address: " << endl;
        cin >> answer;
    if(answer == 'y' || answer == 'Y'){
        cin >> hAddressIn;
        emp.setHaddress(hAddressIn);
    }
    cin.ignore();

}

void Helper::writeToFile(vector<Employee> emps){

    // This serializes an Employee object for easy writing to a file.
    friend ostream & operator << (ostream &out, const Employee & obj){
        out << obj.getIDnum()
        << obj.getFname() << "\n"
        << obj.getMname() << "\n"
        << obj.getLname() << "\n"
        << obj.getAge() << "\n"
        << obj.getHphone() << "\n"
        << obj.getWphone() << "\n"
        << obj.getHemail() << "\n"
        << obj.getWemail() << "\n"
        << obj.getHaddress << "\n\n" << endl;
    }

    // Open our file.
    ofstream out ("Employees.txt");

    // For loop to iterate through the passed in vector and write each object out to the file.
    for (int i = 0; i < emps.size(); i++){
        out<<emps[i];
    }

    // Close file
    out.close();

}