/* 
 * Author: Elijah De Vera
 * Created on January 23,2021
 * Purpose: time converter
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
void getTime( int&, char, int&, bool& );
void convert( int&, int&, char&);
void output( int&, int&, int&, char);
//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int mTime,
        sTime,
        min;
    char c=':',
         inp,
         day;
    bool valid;
    //Project title
    cout<<"Military Time Converter to Standard Time"<<endl;
    cout<<"Input Military Time hh:mm"<<endl;
    //Process/Map inputs to outputs
    do 
    {
        getTime(mTime,c,min,valid);
        if ( valid == true )
        {
            convert(mTime,sTime,day);
            output(mTime,min,sTime,day);
        }
        cout<<"Would you like to convert another time (y/n)"<<endl;
        cin>>inp;
    }while ( inp == 'y' || inp == 'Y' );

    //Output data
    
    //Exit stage right!
    return 0;
}
void getTime( int &mTime, char c, int &min, bool &valid )
{
    valid = true;
    cin>>mTime>>c>>min;
    if ( mTime > 24 || min > 59 )
    {
        cout<<mTime<<c<<min<<" is not a valid time"<<endl;
        valid = false;
    }
}
void convert( int& mTime, int& sTime, char& day )
{
    if ( mTime == 0 )
    {
        sTime = 12; 
        day = 'a'; 
    }
    else if ( mTime < 12 )
    {
        sTime = mTime;
        day = 'a';
    }
    else if ( mTime == 12 )
    {
        sTime = 12;
        day = 'p';
    }
    else if ( mTime >= 13 )
    {
        sTime = mTime - 12;
        day = 'p';
    }
}
void output( int& mTime, int& min, int& sTime, char day )
{
    string proper; 
    if ( day == 'a' )
    {
        proper = "AM";
    }
    else if ( day == 'p' )
    {
        proper = "PM";
    }
    cout<<setfill('0')<<setw(2)<<mTime<<":"<<min<<" = "
        <<sTime<<":"<<min<<" "<<proper<<endl;
}

