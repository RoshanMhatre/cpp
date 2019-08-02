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

vector<Employee> Helper::inputEmployees(vector<Employee> emps){
    // Try catch block for unforeseen exception catching.
    try{    

        // Create a vector to be returned to caller after data entry.
        // vector<Employee> employees = emps;
        
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
            emps.push_back(e);
        }
        return emps;


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
        int answer;
        bool flag;

        // Helper object to utilize Helper functions within this Helper function
        Helper h = Helper();

        // Prompt user for a last name to search for.
        cout << "\n\tSearch for an employee." << endl;
        cout << "\n\tPlease enter the last name of the employee you are searching for: " << endl;
        cin >> searchName;

        // Changes all characters entered to lower case for easier searching.
        transform(searchName.begin(), searchName.end(),searchName.begin(),::tolower);

        // For loop to iterate through the vector.
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
                    cout << "\n\t1 Display the employee details.\n"
                            "\t2 Edit the employee details.\n" << endl;
                    cin >> answer;
                    if (answer == 1){
                        h.displayEmployee(emps[i]);
                    }else if (answer == 2){
                        emps[i] = h.editEmployee(emps[i]);
                        
                    }
                    
                    

                }else{
                cout << "\n\tEmployee not found" << endl;
                }
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

Employee Helper::editEmployee(Employee emp){

    int answer;
    do{
        cout << "\t\nPlease choose which item to edit from the options below." << endl;
        cout << "\t\n1 First Name"
        <<"\t\n2 Middle Name"
        <<"\t\n3 Last Name"
        <<"\t\n4 Age"
        <<"\t\n5 Home Phone"
        <<"\t\n6 Work Phone"
        <<"\t\n7 Home Email"
        <<"\t\n8 Work Email"
        <<"\t\n9 Home Address" 
        <<"\t\n10 Done Editing" << endl;

        cin >> answer;

        if (answer == 1){
            cout << "\t\nEnter First Name: " << endl;
            cin >> fNameIn;
            emp.setFname(fNameIn);

        }else if(answer == 2){
            cout << "\t\nEnter Middle Name: " << endl;
            cin >> mNameIn;
            emp.setMname(mNameIn);

        }else if(answer == 3){
            cout << "\t\nEnter Last Name: " << endl;
            cin >> lNameIn;        
            emp.setLname(lNameIn);

        }else if(answer == 4){
            cout << "\t\nEnter Age: " << endl;
            cin >> ageIn;
            emp.setAge(ageIn);

        }else if(answer == 5){
            cout << "\t\nEnter Home Phone: " << endl;
            cin >> hPhoneIn;
            emp.setHphone(hPhoneIn);

        }else if(answer == 6){
            cout << "\t\nEnter Work Phone: " << endl;
            cin >> wPhoneIn;
            emp.setWphone(wPhoneIn);

        }else if(answer == 7){
            cout << "\t\nEnter Home Email: " << endl;
            cin >> hEmailIn;
            emp.setHemail(hEmailIn);

        }else if(answer == 8){
            cout << "\t\nEnter Work Email: " << endl;
            cin >> wEmailIn;
            emp.setWemail(wEmailIn);

        }else if(answer == 9){
            cout << "\t\nEnter Home Address: " << endl;
            cin >> hAddressIn;
            emp.setHaddress(hAddressIn);
        }
        return emp;
        

    }while (answer != 10);
    
    
}
    

void Helper::writeToFile(vector<Employee> emps){

    for (int i = 0; i < emps.size() + 1; i++){

        ofstream empFile;
        
        empFile.open("Employees.txt");
        
        empFile << "\nEmployee ID Number: " << emps[i].getIDnum() << endl;
        empFile << "First Name: " << emps[i].getFname() << endl;
        empFile << "Middle Name: " << emps[i].getMname() << endl;
        empFile << "Last Name: " << emps[i].getLname() << endl;
        empFile << "Age: " << emps[i].getAge() << endl;
        empFile << "Home Phone Number: " << emps[i].getHphone() << endl;
        empFile << "Work Phone Number: " << emps[i].getWphone() << endl;
        empFile << "Home Email Address: " << emps[i].getHemail() << endl;
        empFile << "Work Email Address: " << emps[i].getWemail() << endl;
        empFile << "Home Address: " << emps[i].getHaddress() << endl;

    }


}