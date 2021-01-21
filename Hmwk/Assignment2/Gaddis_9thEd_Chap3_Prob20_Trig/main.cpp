/*
 * File: main.cpp
 * Author: Elijah De Vera
 * Created on January 14, 2021
 * Purpose: Calculating trig functions
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip> // precision
#include <math.h> // trig functions

using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    int angle;
    float pi, sinResult, cosResult, tanResult, conversion;

    //Initialize or input i.e. set variable values
    pi = 3.14159265359; // value constant for pi
    cout << "Calculate trig functions" << endl;
    cout << "Input the angle in degrees." << endl;  // receiving input
    cin >> angle; // declaring input
    conversion = ( pi * angle ) / 180 ; // conversion to radians
    
    //Map inputs -> outputs
    
    sinResult = sin( conversion );
    cosResult = cos( conversion );
    tanResult = tan( conversion );
    
    //Display the outputs
    cout << setprecision(4) << fixed ; // 4 decimal places
    cout << "sin("<<angle<<") = " << sinResult << endl;
    cout << "cos("<<angle<<") = "<< cosResult << endl;
    cout << "tan("<<angle<<") = " << tanResult;
    
    //Exit stage right or left!
    return 0;
}
