/* Author: Rodney Nedlose
 * Date: 05/14/2019
 * File:   main.cpp
 * Purpose: Show Decision structures by simulating a self driving car.
 * Input: User input for status of traffic light color, oncoming traffic, and turn signal.
 * Output: Based on decisions from the User input, output whether the car turned left or waited.
 * Exceptions: None.
 */

#include <cstdlib>
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main(int argc, char** argv) {
    
    //Variables needed for the program
    bool isRed = false; // Initialize to specific values for If Statements and Switch Cases below
    bool isYellow = false;
    bool isGreen = true;
    bool oncomingTraffic = false;
    string turnSignal = "";
    int userInput = -1;
    
    //Display to the User what the program is going to do.
    cout<<"This program will simulate a left turn by a self-driving car.\n"<<endl;
    cout<<"Please enter the number for your choice when prompted:\n"<<endl;
    
        
    //Menu for first if statement.
    cout<<"Please choose the best option for the status "
            "of the turn signal.\n"
            <<"1 for Left.\n"
            <<"2 for Right.\n"
            <<"3 for Neither."
            <<endl;
        
    //Take the User input from keyboard.
    cin>>userInput;
    cout<<endl;
    
    if(userInput == 1){
        turnSignal = "Left";
    }else if (userInput == 2){
        turnSignal = "Right";
    }else
        turnSignal = "Neither";

    //Clear the input stream.
    cin.ignore();
    
    //Menu for first if statement.
    cout<<"Is there any oncoming traffic?\n"
            <<"1 for Yes.\n"
            <<"2 for No.\n"
            <<endl;
    
    //Take the User input from keyboard.
    cin>>userInput;
    cout<<endl;
    
    if(userInput == 1){
        oncomingTraffic = true;
    }else
        oncomingTraffic = false;
    
    //Clear the input stream.
    cin.ignore();
    
    //Menu for second if statement.
    cout<<"What color is the traffic light?\n"
            <<"1 for Red.\n"
            <<"2 for Yellow.\n"
            <<"3 for Green.\n"
            <<endl;
    
    //Take the User input from keyboard.
    cin>>userInput;
    cout<<endl;
    
    //Switch case for traffic light status.
    switch(userInput)
    {
        case 1:
            isRed = true;
            break;
        case 2:
            isYellow = true;
            break;
        default:
            break;
    }
    
    //Clear the input stream.
    cin.ignore();
    
    //Now we let the car decide if it should turn or wait.
    //Using conditional operators and nested if statements.
    if(turnSignal == "Left" && !oncomingTraffic){
        //nested If statement
        if(!isRed && !isYellow){
            cout<<"The turn signal is signaling left, there is no oncoming traffic "
                    "and the light is green, so the car will make the "
                    "left turn.\n"<<endl;
        }else
            cout<<"Although the turn signal is on, and there is no "
                    "oncoming traffic, the light is either red or "
                    "yellow, so the car will not make the left turn.\n"
                    <<endl;
    }else if(turnSignal == "Right" || turnSignal == "Neither"){
        if(turnSignal == "Right"){
            cout<<"The turn signal is not correct so the car will "
                    "not make the left turn.\n"<<endl;
        }else
            cout<<"The turn signal is not on so the car will not "
                    "make the left turn.\n"<<endl;
    }else if(oncomingTraffic){
        cout<<"There is oncoming traffic so the car will not make the "
             "left turn.\n"<<endl;
    }
    
    return 0;
}

