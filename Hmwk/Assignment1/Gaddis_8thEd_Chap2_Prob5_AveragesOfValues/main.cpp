/* 
 * File:   main.cpp
 * Author: Elijah De Vera
 * Created on January 5, 2021, 12:36 AM
 * Purpose: Average of Values
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
    double int1, int2, int3, int4, int5, sum, average;
    
    //Initialize Variables
    int1 = 28;
    int2 = 32;
    int3 = 37;
    int4 = 24;
    int5 = 33;
    
    //Map Inputs to Outputs -> Process
    sum = int1+int2+int3+int4+int5;
    average = sum/5;
    
    //Display Inputs/Outputs
    cout<<average<<endl;
    // Exit the Program - Cleanup
    return 0;
}

