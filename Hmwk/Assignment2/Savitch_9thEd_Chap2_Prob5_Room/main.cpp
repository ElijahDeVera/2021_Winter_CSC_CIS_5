/* 
 * File:main.cpp
 * Author: Elijah De Vera
 * Created on January 14, 2021, 12:28 PM
 * Purpose: Calculating min and max for a room
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    int max, total, over, under;
    
    //Initialize or input i.e. set variable values
    cout << "Input the maximum room capacity and the number of people" << endl; // input for total people
    cin >> max; // receivng input and delcaring it as max
    cin >> total; // receiving input and declaring it as total
    
    //Map inputs -> outputs
    over = total - max; // 
    under = max - total;

    //Display the outputs
    if ( total <= max ) // conditional if under or equal to the maximum capacity
    {
        cout << "Meeting can be held." << endl;
        cout << "Increase number of people by " << under << " will be allowed without violation."; 
    }
    else// conditional if over the maximum capacity
    {
        cout << "Meeting cannot be held." << endl; 
        cout << "Reduce number of people by " << over << " to avoid fire violation.";
    }

    //Exit stage right or left!
    return 0;
}

