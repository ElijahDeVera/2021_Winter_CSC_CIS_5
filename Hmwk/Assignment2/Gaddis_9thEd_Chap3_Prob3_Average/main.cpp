/*
 * File: main.cpp
 * Author: Elijah De Vera
 * Created on January 14, 2021
 * Purpose: Calculating average
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip> 

using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float inp1, inp2, inp3, inp4, inp5, sum, average;
    
    //Initialize or input i.e. set variable values
    cout << "Input 5 numbers to average." << endl; // receiving input
    cin>> inp1; // declaring inputs
    cin>> inp2;
    cin>> inp3;
    cin>> inp4;
    cin>> inp5;
    
    //Map inputs -> outputs
    sum = inp1 + inp2 + inp3 + inp4 + inp5; // adding sum
    average = sum/5; // calculating average
    
    //Display the outputs
    cout << fixed << showpoint; // allows to show point for integers
    cout << setprecision(1); // one decimal
    cout << "The average = " << average;
    
    //Exit stage right or left!
    return 0;
}
