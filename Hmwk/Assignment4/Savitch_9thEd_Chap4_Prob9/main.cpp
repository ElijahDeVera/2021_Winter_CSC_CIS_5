/* 
 * Author: Elijah De Vera
 * Created on January 21,2021
 * Purpose:  two and three parameter arguments
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes
float twoPar ( float, float );          // 2 parameter function
float threePar ( float, float, float ); // 3 parameter function

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float inp1,
          inp2,
          inp3; 
    
    //Initialize or input i.e. set variable values
    cout<<"Enter first number:"<<endl<<endl;
    cout<<"Enter Second number:"<<endl<<endl;
    cout<<"Enter third number:"<<endl<<endl;
    cin>>inp1;
    cin>>inp2;
    cin>>inp3;
    
    //Display the outputs
    cout<<"Largest number from two parameter function:"<<endl;
    cout<<twoPar(inp1,inp2)<<endl<<endl;
    
    cout<<"Largest number from three parameter function:"<<endl;
    cout<<threePar(inp1,inp2,inp3)<<endl; 

    //Exit stage right or left!
    return 0;
}

// two parameter for finding largest number
float twoPar ( float num1, float num2 )
{
    float max; 
    max = 0; 
    if ( num1 > num2 )
    {
        max = num1; 
    }
    else 
    {
        max = num2; 
    }
    return max; 
}

// three parameter for finding largest number
float threePar ( float num1, float num2, float num3 )
{
    float max; 
    max = 0; 
    if ( num1 > num2 && num1 > num3 )
    {
        max = num1; 
    }
    else if ( num2 > num1 && num2 > num3 )
    {
        max = num2; 
    }
    else if ( num3 > num1 && num3 > num2 )
    {
        max = num3; 
    }
    return max; 
}

