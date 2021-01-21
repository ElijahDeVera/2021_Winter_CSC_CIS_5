/*
 * File: main.cpp
 * Author: Elijah De Vera
 * Create on January 14, 2021
 * Purpose: Calculating paycheck
 */


//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip> //precision
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float pay, hours, rate, regtime, ovrtime;
    
    //Initialize or input i.e. set variable values
    cout << "This program calculates the gross paycheck." << endl;
    cout << "Input the pay rate in $'s/hr and the number of hours." << endl; // receiving input
    cin >> rate; // declaring input
    cin >> hours;
    regtime = 40;
    ovrtime = hours - regtime; // hours past 40 hour mark 
    pay = rate * hours; // base equation for pay rate
    
    //Map inputs -> outputs
    if ( hours > regtime )
        pay = ( rate * regtime ) + ( 2 * rate * ovrtime ); // adding double to overtime hours on top of base pay
    
    //Display the outputs
    cout << setprecision(2) << fixed;
    cout << "Paycheck = $" << setw(7) << pay; 
    
    //Exit stage right or left!
    return 0;
}
