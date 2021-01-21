/*
 * File: main.cpp
 * Author: Elijah De Vera
 * Created on January 14, 2021
 * Purpose: calculating insurance
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
    
    cout << "Insurance Calculator" << endl; // title of project
    
    //Set the random number seed
    
    //Declare Variables
    float housePrice, insuranceRate, minInsurance;
    
    //Initialize or input i.e. set variable values
    cout << "How much is your house worth?" << endl; // receiving input
    cin>> housePrice;  // declaring input
    insuranceRate = 0.8; // 80% 
    
    //Map inputs -> outputs
    minInsurance = housePrice * insuranceRate; // calculating min insurance
    
    //Display the outputs
    cout << "You need $" << minInsurance << " of insurance.";

    //Exit stage right or left!
    return 0;
}
