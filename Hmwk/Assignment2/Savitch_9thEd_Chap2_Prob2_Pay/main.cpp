/* 
 * File: main.cpp
 * Author: Elijah De Vera
 * Created on January 14, 2021, 12:26 PM
 * Purpose: Calculating Pay
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip> //set precision

using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    
    //Set the random number seed
    
    //Declare Variables
    int salary;
    float rate, retPay, newSal, nMonthly;
    
    //Initialize or input i.e. set variable values
    cout << "Input previous annual salary." << endl; // receiving input from user 
    cin >> salary; // declaring input
    rate = 0.076; // 7.6% rate
    
    //Map inputs -> outputs
    retPay = ( salary * rate ) / 2; // ret pay for the 6 months
    newSal = salary + ( salary * rate ); // new salary calc
    nMonthly = newSal / 12; // new monthly calc
    
    //Display the outputs
    cout << setprecision(2) << fixed; 
    cout << setw(19) << left << "Retroactive pay"    << "= $" << setw(7) << right << retPay << endl; 
    cout << setw(19) << left << "New annual salary"  << "= $" << setw(7) << right << newSal << endl;
    cout << setw(19) << left << "New monthly salary" << "= $" << setw(7) << right << nMonthly; 

    //Exit stage right or left!
    return 0;
}

