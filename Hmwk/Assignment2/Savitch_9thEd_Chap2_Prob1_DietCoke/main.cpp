/* 
 * File: main.cpp
 * Author: Elijah De Vera
 * Created on January 14, 2021, 12:24 PM
 * Purpose: Calculating amount of dietcoke to kill a man
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
    
    cout<< "Program to calculate the limit of Soda Pop Consumption." << endl; // title of project
    
    //Set the random number seed
    
    //Declare Variables
    const float popSweet = 0.001f;
    
    int weightLb, sweetnerM, mouseG, canG, deadCan;
    
    float weightG, sweetnerH, sugCanG;
    
    //Initialize or input i.e. set variable values
    cout << "Input the desired dieters weight in lbs." << endl; // receiving input
    cin >> weightLb; // declaring input
    sweetnerM = 5;
    mouseG = 35; 
    canG = 350;
    
    //Map inputs -> outputs
    weightG = weightLb * ( 45359.2 / 100 ); // converting grams to weight
    
    sweetnerH = ( weightG * sweetnerM ) / mouseG; // calculating sweetner to kill human proportional to mouse
    
    sugCanG = popSweet * canG; // calculating amount of sugar in can
    
    deadCan = sweetnerH / sugCanG; // calculating amount of cans needed to kill
    
    //Display the outputs
    cout << "The maximum number of soda pop cans" << endl;
    cout << "which can be consumed is " << deadCan << " cans";

    //Exit stage right or left!
    return 0;
}


