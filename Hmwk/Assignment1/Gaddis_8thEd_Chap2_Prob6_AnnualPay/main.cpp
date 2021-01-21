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
    double payAmount, payPeriods, annualPay;
    
    //Initialize Variables
    payAmount = 2200.0;
    payPeriods = 26;    
            
    //Map Inputs to Outputs -> Process
    annualPay = payAmount * payPeriods;
    
    //Display Inputs/Outputs
    cout<<annualPay<<endl;
    
    // Exit the Program - Cleanup
    return 0;
}


