/* 
 * File:   
 * Author: Elijah De Vera
 * Created on January 21, 2021
 * Purpose: Inflation Problem
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes
float infRate ( float, float ); 

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float nPrice, // new price
          oPrice; // old price
    string answer; // input
    //Map inputs -> outputs
    do 
    {
        cout<<"Enter current price:"<<endl;
        cout<<"Enter year-ago price:"<<endl;
        cin>>nPrice;
        cin>>oPrice;
        cout<<"Inflation rate: "<<setprecision(2)<<fixed<<infRate(nPrice,oPrice)*100<<"%\n\n"; 
        cout<<"Again:"<<endl;
        cin>>answer;
        if ( answer == "y" )
        {
            cout<<endl; 
        }
        
    }while ( answer == "y" );
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}

float infRate ( float newP, float oldP )
{
    float infl; // inflation
    infl = ((newP-oldP)/oldP); 
    return infl;
}

