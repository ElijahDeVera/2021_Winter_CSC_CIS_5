/* 
 * Author: Elijah De Vera
 * Created on January 23,2021
 * Purpose: present value
 */

//System Libraries
#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
float psntVal( float, float, int );
//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    float ftrVal,
          intRate;
    int years; 
    //Project title
    cout<<"This is a Present Value Computation"<<endl; 
    //Initialize Variables
    cout<<"Input the Future Value in Dollars"<<endl; 
    cin>>ftrVal; 
    cout<<"Input the Number of Years"<<endl; 
    cin>>years; 
    cout<<"Input the Interest Rate %/yr"<<endl; 
    cin>>intRate; 
    //Output data
    cout<<setprecision(2)<<fixed<<"The Present Value = $"<<psntVal(ftrVal,intRate,years);  
    //Exit stage right!
    return 0;
}
//present value Function
float psntVal( float ftrVal, float intRate, int years )
{
    float pValue; 
    pValue = ftrVal/(pow(1+(intRate/100),years));
    return pValue; 
}



