/*
 * File: main.cpp
 * Author: Elijah De Vera
 * Created on January 14, 2021
 * Purpose: Cookies problem
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
    //Set the random number seed
    
    //Declare Variables
    int cookiesPerBag, servingPerBag, caloriesPerServing, cookiesPerServing;
    float cookiesAte, servingsAte, caloriesAte;
    
    //Initialize or input i.e. set variable values
    cookiesPerBag = 40;
    servingPerBag = 10;
    caloriesPerServing = 300;
    cookiesPerServing = 4; 
    cout << "How many cookies did you eat?" << endl; // receiving input from user
    cin >> cookiesAte; // declaring input
    
    //Map inputs -> outputs
    servingsAte = cookiesAte / cookiesPerServing; 
    caloriesAte = servingsAte * caloriesPerServing; 
    
    //Display the outputs
    cout << "Calorie Counter" << endl; 
    cout << "You consumed " << caloriesAte <<  " calories.";
    
    //Exit stage right or left!
    return 0;
}
