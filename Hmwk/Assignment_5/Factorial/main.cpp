/* 
 * Author: Elijah De Vera
 * Created on January 23, 2021
 * Purpose:  Factorial Problem
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
int fctrl(int);//Function to write for this problem

//Execution Begins Here
int main(int argc, char** argv) {
    //Program TItle
    cout<<"This program calculates the factorial using a function prototype found in the template for this problem."<<endl;
    
    //Declare Variables
    int inp;
    
    //Initialize Variables
    cout<<"Input the number for the function."<<endl; 
    cin>>inp;
    
    //Process/Map inputs to outputs
    
    //Output data
    cout<<inp<<"! = "<<fctrl(inp);  
    //Exit stage right!
    return 0;
}

int fctrl( int inp )
{
    int sltn = 1; 
    for ( int i = 1; i <= inp; i++ )
    {
        sltn*=i; 
    }
    return sltn; 
}
