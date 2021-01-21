/* 
 * File: main.cpp
 * Author: Elijah De Vera
 * Created on January 14, 2021, 12:29 PM
 * Purpose: Calculating sums of pos and neg integers
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
    float number, 
        negSum, 
        posSum, 
        sum;
    
    //Initialize or input i.e. set variable values
    cout << "Input 10 numbers, any order, positive or negative" << endl;
    
    cin >> number;
    posSum += ( number > 0 ) ? number : 0.0;
    negSum += ( number < 0 ) ? number : 0.0;
    
    cin >> number;
    posSum += ( number > 0 ) ? number : 0.0;
    negSum += ( number < 0 ) ? number : 0.0;
    
    cin >> number;
    posSum += ( number > 0 ) ? number : 0.0;
    negSum += ( number < 0 ) ? number : 0.0;
    
    cin >> number;
    posSum += ( number > 0 ) ? number : 0.0;
    negSum += ( number < 0 ) ? number : 0.0;
    
    cin >> number;
    posSum += ( number > 0 ) ? number : 0.0;
    negSum += ( number < 0 ) ? number : 0.0;
    
    cin >> number;
    posSum += ( number > 0 ) ? number : 0.0;
    negSum += ( number < 0 ) ? number : 0.0;
    
    cin >> number;
    posSum += ( number > 0 ) ? number : 0.0;
    negSum += ( number < 0 ) ? number : 0.0;
    
    cin >> number;
    posSum += ( number > 0 ) ? number : 0.0;
    negSum += ( number < 0 ) ? number : 0.0;
    
    cin >> number;
    posSum += ( number > 0 ) ? number : 0.0;
    negSum += ( number < 0 ) ? number : 0.0;
    
    cin >> number;
    posSum += ( number > 0 ) ? number : 0.0;
    negSum += ( number < 0 ) ? number : 0.0;
    
    //Map inputs -> 
    sum = negSum + posSum; // calc total sum
    
    //Display the outputs
    cout << "Negative sum = " << setw(3) << negSum << endl;
    cout << "Positive sum = " << setw(3) << posSum << endl;
    cout << "Total sum    = " << setw(3) << sum;

    //Exit stage right or left!
    return 0;
}

