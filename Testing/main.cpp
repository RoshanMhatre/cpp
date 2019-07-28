/* 
 * Author: Rodney Nedlose
 * Date: May 8, 2019
 * File:   main.cpp
 * Purpose: Demonstrate how to make your first program in C++
 * Input: None.
 * Output: C++ example code that uses cout to output literal strings to the monitor or display, shows how to create a new line with endl and
 * \n, illustrates the use of // and /* comments, explains literal strings and string variables, and what returns 0 means at the end of a program.
 * Exceptions: None.
 */

#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    int i = -1; // index variable for loops
    int p = -1; // pass variable for sorting
    int temp = -1; // temp variables for swapping
    string temp2 = "";
    
    // Parallel arrays
    string names[] = {"Ben", "Mark", "Sally", "Bill", "Velma"};
    int ages[] = {14, 16, 17, 13, 18};
    
    // Print names and ages out prior to sorting
    for(i = 0; i < 5; i++){
        cout<<names[i]<<ages[i]<<endl;
    }
    
    for (p = 0; p < 5; p++) {               // Bubble sort by age
        for (i = 0; i < 5 - p; i++) {       // Loop through and sort
            if (ages[i] > ages[i + 1]) {    // both parallel arrays.
                temp = ages[i];
                ages[i] = ages[i + 1];
                ages[i + 1] = temp;
                
                temp2 = names[i];
                names[i] = names[i + 1];
                names[i + 1] = temp2;
            }
            
        }
    }
    
    // Print names and ages out after sorting
    for(i = 0; i < 5; i++){
        cout<<names[i]<<ages[i]<<endl;
    }
    
    // Two Dimensional Array
    int scores[5][2] = {{20,15}, {19,16}, {16,12}, {17,15}, {14,11}};
    
    // Print out the contents of this 2D Array
    for(p = 0; p < 5; p++){
        for(i = 0; i < 2; i++){
            cout<<"Scores: "<<scores[p][i]<<endl;
        }
    }
    
    return 0;
}

