/* 
 * Author: Elijah De Vera
 * Created on January 23
 * Purpose:  minmax program
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
void minmax(int, int, int, int&, int& );//Function to find the min and max

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int inp1,
        inp2,
        inp3,
        min,
        max; 
    //Initialize Variables
    cout<<"Input 3 numbers"<<endl; 
    cin>>inp1;
    cin>>inp2;
    cin>>inp3; 
    min = max = inp1; 
    //Process/Map inputs to outputs
    
    //Output data
    minmax( inp1, inp2, inp3, min, max); 
    //Exit stage right!
    return 0;
}
void minmax( int inp1, int inp2, int inp3, int& min, int& max)
{
    if ( inp1 > inp2 && inp1 > inp3 )
    {
        max = inp1; 
        if ( inp2 > inp3 )
        {
            min = inp3; 
        }
        else
        {
            min = inp2; 
        }
    }
    if ( inp2 > inp1 && inp2 > inp3 )
    {
        max = inp2; 
        if ( inp1 > inp3 )
        {
            min = inp3; 
        }
        else
        {
            min = inp1; 
        }
    }
    if ( inp3 > inp1 && inp3 > inp2 )
    {
        max = inp3; 
        if ( inp1 > inp2 )
        {
            min = inp2; 
        }
        else
        {
            min = inp1; 
        }
    }
    cout<<"Min = "<<min<<endl;
    cout<<"Max = "<<max;
    return; 
}
