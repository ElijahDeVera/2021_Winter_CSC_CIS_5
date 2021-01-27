/* 
 * Author: Elijah De Vera
 * Created on January 23, 2021
 * Purpose:  isPrime program
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
bool isPrime(int);//Determine if the input number is prime.

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int inp; 
    
    //Initialize Variables
    cout<<"Input a number to test if Prime."<<endl; 
    cin>>inp;
    //Process/Map inputs to outputs
    
    //Output data
    cout<<inp;
    if ( isPrime(inp) == true )
    {
        cout<<" is prime.";
    }
    else 
    {
        cout<<" is not prime.";
    }
    //Exit stage right!
    return 0;
}

bool isPrime( int inp )
{
    int counter = 0; 
    
    for ( int i  = 2; i < inp; i++ )
    {
        if ( inp % i == 0 )
        {
            counter++; 
        }
    }
    if ( counter > 0 ) 
    {
        return false; 
    }
    else
    {
        return true; 
    }
}
