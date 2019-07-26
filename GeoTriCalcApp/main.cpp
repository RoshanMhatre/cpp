/* Author: Rodney Nedlose
 * Date: 05/07/2019
 * File:   main.cpp
 * Purpose: Output area of a triangle two times
 * Input: None.
 * Output: Show values for the base and height, as well as the area, two times.
 * Exceptions: None.
 */

#include <cstdlib>
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main(int argc, char** argv) {
    
    // Variables needed for 1st calculation
    int sideOne = 3;
    int sideTwo = 4;
    int area = 0;
    
    // Area of a triangle is a=(s1*s2)/2
    area =  (sideOne * sideTwo) / 2;    
    
    // Variables needed for 2nd calculation
    double sideOne2 = 0;
    double sideTwo2 = 0;
    double area2 = 0;
    
    // Multiply integer values for base and height by 5, convert to doubles by casting,
    // then place in second set of variables
    sideOne2 = (double)sideOne * 5;
    sideTwo2 = (double)sideTwo * 5;
    
    // Calculate the area for the second set of values using a=(s1*s2)/2
    area2 = (sideOne2 * sideTwo2) / 2;    
    
    // Output line for first calculation
    cout<<"The sides of the triangle measure "<<sideOne<<" and "<<sideTwo<<". The area is "<<area<<"."<<"\n"<<endl;
    
    // Output line for the second calculation
    cout<<setprecision(1)<<fixed<<"The sides of the triangle measure "<<sideOne2<<" and "<<sideTwo2<<" ."<<"  The area is "<<area2<<"."<<endl;
    

    return 0;
}

