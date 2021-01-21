/* 
 * File:   main.cpp
 * Author: Elijah De Vera
 * Created on January 5, 2021, 12:36 AM
 * Purpose: Restaurant Bill
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
    double bill,
            tax,
            totalNoTip,
            taxAmount,
            tip,
            total;
    
    //Initialize Variables
    bill = 8.867E1;
    tax = 0.0675E0;

    //Map Inputs to Outputs -> Process
    taxAmount = bill * tax;
    totalNoTip = bill + taxAmount;
    tip = 0.2 * totalNoTip;
    total = tip + totalNoTip;
            
    //Display Inputs/Outputs
    cout<<"Meal Cost: "<<bill<<endl;
    cout<<"Tax Amount: "<<taxAmount<<endl;
    cout<<"Tip Amount: "<<tip<<endl;
    cout<<"Total: "<<total<<endl;
    
    
    // Exit the Program - Cleanup
    return 0;
}

