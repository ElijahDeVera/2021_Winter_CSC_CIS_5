/* 
 * File:   main.cpp
 * Author:  Elijah De Vera 
 * Created on January 21, 2021
 * Purpose: MPG problem
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip> 
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
const float CVLITER = 0.264179f; // constant of liters to gallon

//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes
float mpg ( float, float ); //miles per gallon function

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float liter1,
          miles1,
          liter2,
          miles2; 
    string answer; 
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    do 
    {
        cout<<"Car 1"<<endl;
        cout<<"Enter number of liters of gasoline:"<<endl; 
        cout<<"Enter number of miles traveled:"<<endl;
        cin>>liter1; 
        cin>>miles1; 
        cout<<"miles per gallon: "<<setprecision(2)<<fixed<<mpg(liter1,miles1)<<endl<<endl; 
        cout<<"Car 2"<<endl;
        cout<<"Enter number of liters of gasoline:"<<endl; 
        cout<<"Enter number of miles traveled:"<<endl;
        cin>>liter2; 
        cin>>miles2; 
        cout<<"miles per gallon: "<<setprecision(2)<<fixed<<mpg(liter2,miles2)<<endl<<endl; 
        if ( mpg(liter1,miles1) > mpg(liter2,miles2) )
        {
            cout<<"Car 1 is more fuel efficient"<<endl<<endl; 
        }
        else
        {
            cout<<"Car 2 is more fuel efficient"<<endl<<endl; 
        }
        cout<<"Again:"<<endl; 
        cin>>answer; 
        if (answer=="y")
        {
            cout<<endl; 
        }
    } while ( answer == "y" );

    //Exit stage right or left!
    return 0;
}

float mpg ( float liter, float miles )
{
    float gallons, mpg; 
    gallons = liter * CVLITER; 
    mpg = miles/gallons; 
    return mpg; 
    
}

