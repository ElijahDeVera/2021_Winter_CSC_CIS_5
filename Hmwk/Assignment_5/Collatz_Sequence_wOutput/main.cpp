/* 
 * Author: Elijah De Vera
 * Created on January 23, 2021
 * Purpose:  Collatz Sequence w output
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
int collatz1(int);//3n+1 sequence

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int n,ns;
    
    //Initialize Variables
    cout<<"Collatz Conjecture Test"<<endl;
    cout<<"Input a sequence start"<<endl;
    cin>>n;
    
    //Process/Map inputs to outputs
    ns=collatz1(n);
    
    //Output data
    cout<<"Sequence start of "<<n<<" cycles to 1 in "<<
            ns<<" steps";
    
    //Exit stage right!
    return 0;
}

int collatz1( int n )
{
    int steps = 1; 
    while ( n != 1 )
    {
        if ( n % 2 == 0 )
        {
            cout<<n<<", ";
            n /= 2; 
            steps++; 
        }
        else
        {
            cout<<n<<", "; 
            n = ( n * 3 + 1 );
            steps++; 
        }
    }
    cout<<n<<endl; 
    return steps; 
}

