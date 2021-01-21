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
    double annualRise, year5, year7, year10;
    
    //Initialize Variables
    annualRise = 1.5;
    
    //Map Inputs to Outputs -> Process
    year5 = 1.5 * 5;
    year7 = 1.5 * 7;
    year10 = 1.5 * 10;
    
    //Display Inputs/Outputs
    cout<<"5 years: "<<year5<<endl;
    cout<<"7 years: "<<year7<<endl;
    cout<<"10 years: "<<year10<<endl;
            
    // Exit the Program - Cleanup
    return 0;
}

