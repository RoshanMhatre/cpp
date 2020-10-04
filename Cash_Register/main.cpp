/* Author: Rodney Nedlose
 * Date: 05/20/2019
 * File:   main.cpp
 * Purpose: Determine tax amount for variable items input by User, and 
 * show the original item cost, the tax amount, and the subtotal for each item.
 * Input: User input floating point numbers during a loop
 * Output: Formatted Header with item cost, item tax, and item subtotal with 
 * totals for each column below. 
 * Exceptions: None.
 */

#include <cstdlib>
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main(int argc, char** argv) {
 // const variables are read-only variables so their values can't be changed later
    const double TAXRATE = 0.07; // Constant variable for the tax rate
    
    // Need an underline later, so assign it to a variable for easier reading code
    const string UNDERLINE = "__________________________________________________";
    
    double itemCost[5]; // These arrays will be used to hold input
    double itemTax[5]; // and the derived values after calculations
    double subTotal[5]; // are performed on the input values
    
    double itemsTotal = 0; // These are our column total variables
    double taxTotal = 0;
    double totalDue = 0;
    
    cout << "Cash Register Calculator Application" << endl;
    
    
    for (int i = 0; i <= 4; i++){  // For loop iterates through getting user 
                                    // input and doing needed calculations
        cout << "What is the cost of the item?(in dollars/cents)" << endl;
        cin>>itemCost[i];
        itemTax[i] = itemCost[i] * TAXRATE; // These lines calculate all the taxes
        subTotal[i] = itemCost[i] + itemTax[i]; // and get you the total amount
        itemsTotal = itemsTotal + itemCost[i];  // that has to be played
        taxTotal = taxTotal + itemTax[i];
        totalDue = totalDue + subTotal[i];
        cin.ignore();               // Clear out the input to make sure nothing
                                    // is left after each iteration
    }
    
    cout << right << setw(15) << "Item Cost";  // Set up our Header
    cout << right << setw(15) << "Item Tax";
    cout << right << setw(20) << "Item Subtotal" << endl;
    cout << UNDERLINE << "\n"<< endl;
    
    for (int j = 0; j <= 4; j++) {  // For loop to print our stored values out
                                    // to the console
        cout << setprecision(2) << fixed;
        cout << right << setw(15) << itemCost[j];
        cout << right << setw(15) << itemTax[j];
        cout << right << setw(20) << subTotal[j] << endl;
        
    }
    
    cout << UNDERLINE << "\n" << endl;
    
    cout << right << setw(15) << "Items Total";  // These are our fields for 
    cout << right << setw(15) << "Tax Total";   // the totals
    cout << right << setw(20) << "Total Due" << endl;
    
    cout << right << setw(15) << itemsTotal;   // These are the totals based
    cout << right << setw(15) << taxTotal;      // on what the User entered
    cout << right << setw(20) << totalDue << endl;    

    return 0;
}

