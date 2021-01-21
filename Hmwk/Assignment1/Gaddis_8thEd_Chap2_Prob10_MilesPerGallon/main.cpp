/* 
 * File:   main.cpp
 * Author: Elijah De Vera
 * Created on January 5, 2021, 12:36 AM
 * Purpose: Sales Prediction
 */

//System Libraries
#include <iostream> //I/O Library
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversion, High Dimensioned Arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    double gallons, miles, mpg;
    
    //Initialize Variables
    gallons = 15;
    miles = 375;
    
    //Map Inputs to Outputs -> Process
    mpg = miles/gallons; 
    
    //Display Inputs/Outputs
    cout<< "Miles: " << miles << endl;
    cout<< "Gallon: " << gallons << endl;
    cout<< "Miles per gallon: "<< mpg << endl;
    
    
    // Exit the Program - Cleanup
    return 0;
}

