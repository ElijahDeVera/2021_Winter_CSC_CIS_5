/*
 * File: main.cpp
 * Author: Elijah De Vera
 * Created on January 14, 2021
 * Purpose: Converting fahreinheit to celsius
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
    
    out << "Temperature Converter" << endl; // title or project
    
    //Set the random number seed
    
    //Declare Variables
    float celsius, fahrenheit;
    
    //Initialize or input i.e. set variable values
    cout << "Input Degrees Fahrenheit" << endl; // receiving input
    cin >> fahrenheit;  // declaring input
    
    //Map inputs -> outputs
    celsius = ( ( fahrenheit - 32 ) * ( 5 ) ) / 9 ; // calculating celsius
    
    //Display the outputs
    cout << setprecision(1) << fixed;
    cout << fahrenheit << " Degrees Fahrenheit = " << celsius << " Degrees Centigrade";

    
    //Exit stage right or left!
    return 0;
}
