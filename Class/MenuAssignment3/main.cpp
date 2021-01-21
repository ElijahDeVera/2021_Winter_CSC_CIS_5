/* 
 * File:   main.cpp
 * Author: Elijah De Vera
 * Created on January 19, 2021, 12:36 AM
 * Purpose: Menu for Homework 
 */

//System Libraries
#include <iostream> //I/O Library
#include <string>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversion, High Dimensioned Arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    char choice; 

    //Display Menu
    cout<<"Menu for Assignment 3"<<endl; 
    cout<<"Type 1 for book problem"<<endl;
    cout<<"Type 2 for sorting names in alphabetical order problem"<<endl;
    cout<<"Type 3 for bank charging problem"<<endl;
    cout<<"Type 4 for racing problem"<<endl;
    cout<<"Type 5 for ISP problem"<<endl; 
    cout<<"Type 6 for rock paper scissors problem"<<endl;
    cout<<"Type 7 for roman numeral conversion problem"<<endl;
    cout<<"Type 8 for compatible signs problem"<<endl; 
    cin>>choice; 

    switch(choice)
    {
        case '1':
        {
            cout << "Book Worm Points" << endl;
            //Declare Variables
            int books, 
                points;

            //Initialize or input i.e. set variable values
            cout << "Input the number of books purchased this month." << endl; // getting input from User
            cin >> books;

            //Map inputs -> outputs
            if ( books == 0 )
            {
                points = 0;
            }
            else if ( books == 1 )
            {
                points = 1;
            }
            else if ( books == 2 )
            {
                points = 15;
            }
            else if ( books == 3 )
            {
                points = 30;
            }
            else if ( books > 4 )
            {
                points = 60;
            }

            //Display the outputs
            cout << "Books purchased = " << setw(2) << right << books << endl;
            cout << "Points earned   = " << setw(2) << right << points;

            //Exit stage right or left!
            return 0;
            break;
        }  
        case '2':
        {
            cout << "Sorting Names" << endl; // Project title
            //Declare Variables
            string name1, name2, name3;

            //Initialize or input i.e. set variable values
            cout << "Input 3 names" << endl;
            cin >> name1;
            cin >> name2;
            cin >> name3;
            int num = 0;

            //Map inputs -> outputs
           if ( name1[0] < name2[0] && name1[0] < name3[0] )
            {
                cout << name1 << endl;
                if ( name2[0] < name3[0] )
                {
                    cout << name2 << endl << name3;
                }
                else 
                {
                    cout << name3 << endl << name2; 
                }
            }
           if ( name2[0] < name1[0] && name2[0] < name3[0] )
            {
                cout << name2 << endl;
                if ( name1[0] < name3[0] )
                {
                    cout << name1 << endl << name3;
                }
                else 
                {
                    cout << name3 << endl << name1; 
                }
            }
            if ( name3[0] < name1[0] && name3[0] < name2[0] )
            {
                cout << name3 << endl;
                if ( name1[0] < name2[0] )
                {
                    cout << name1 << endl << name2;
                }
                else 
                {
                    cout << name2 << endl << name1; 
                }
            }
            break;
        }
        case '3':
        {
            cout << "Monthly Bank Fees" << endl; // title of project
            //Declare Variables
            float check1, 
                  check2, 
                  check3, 
                  check4,

                  charge,
                  balance,
                  newBal,
                  checks,
                  cFee,
                  monFee,
                  lowBal;

            //Initialize or input i.e. set variable values
            check1 = .10;
            check2 = .08;
            check3 = .06;
            check4 = .04;
            cout << "Input Current Bank Balance and Number of Checks" << endl; // receiving input
            cin >> balance; // declaring input
            newBal = balance;
            cin >> checks;
            cFee = 0; 
            monFee = 10;
            lowBal = 15; 

            //Map inputs -> outputs
            if ( balance < 400 || balance > 0 ) // conditional if balance is less than 400
            {
                newBal -= lowBal; 
            }

            if ( balance > 0 )
            {
                newBal -= monFee; // montly fee

                if ( checks < 20 && checks > 0 ) // less than 20 checks
                {
                    newBal -= checks * check1;
                    cFee += checks * check1;
                }
                else if ( checks >= 20 && checks < 40 ) // 20 <= checks < 40
                {
                    newBal -= checks * check2; 
                    cFee += checks * check2; 
                }
                else if ( checks >= 40 && checks < 60 )// 40 <= checks < 60 
                {
                    newBal -= checks * check3; 
                    cFee += checks * check3; 
                }
                else if ( checks >= 60 )// checks > 60 
                {
                    newBal -= checks * check4;
                    cFee += checks * check4; 
                }
            }

            //Display the outputs
            if ( balance > 0 )
            {
                cout << setprecision(2) << fixed; 
                cout << "Balance     $" << setw(9) << right << balance << endl;
                cout << "Check Fee   $" << setw(9) << right << cFee << endl;
                cout << "Monthly Fee $" << setw(9) << right << monFee << endl;
                cout << "Low Balance $" << setw(9) << right << lowBal << endl;
                cout << "New Balance $" << setw(9) << right <<newBal;  
            }
            else 
            { 
                cout << "Low Balance";
            }
            break;
        }
        case '4':
        {
            cout << "Race Ranking Program" << endl; // project title    
            //Declare Variables
            string name1, 
                   name2,
                   name3;

            int time1,
                time2,
                time3;

            //Initialize or input i.e. set variable values
            cout << "Input 3 Runners" << endl;
            cout << "Their names, then their times" << endl;
            cin >> name1;
            cin >> time1; 
            cin >> name2; 
            cin >> time2; 
            cin >> name3; 
            cin >> time3; 

            //Map inputs -> outputs
            if ( time1 < time2 && time1 < time3 )
            {
                cout << name1 << "\t" << setw(3) << time1 << endl;
                if ( time2 < time3 )
                {
                    cout << name2 << "\t" << setw(3) << time2 << endl;
                    cout << name3 << "\t" << setw(3) << time3; 
                }
                else
                {
                    cout << name3 << "\t" << setw(3) << time3 << endl;
                    cout << name2 << "\t" << setw(3) << time2; 
                }
            }

            if ( time2 < time1 && time2 < time3 )
            {
                cout << name2 << "\t" << setw(3) << time2 << endl;
                if ( time1 < time3 )
                {
                    cout << name1 << "\t" << setw(3) << time1 << endl;
                    cout << name3 << "\t" << setw(3) << time3; 
                }
                else
                {
                    cout << name3 << "\t" << setw(3) << time3 << endl;
                    cout << name1 << "\t" << setw(3) << time1; 
                }
            }

            if ( time3 < time1 && time3 < time2 )
            {
                cout << name3 << "\t" << setw(3) << time3 << endl;
                if ( time1 < time2 )
                {
                    cout << name1 << "\t" << setw(3) << time1 << endl;
                    cout << name2 << "\t" << setw(3) << time2; 
                }
                else
                {
                    cout << name2 << "\t" << setw(3) << time2 << endl;
                    cout << name1 << "\t" << setw(3) << time1; 
                }
            }
            break;
        }
        case '5':
        {
            cout << "ISP Bill" << endl;
            //Declare Variables
            char package;
            int hours,
                aHours,
                bHours; 
            float bill,
                  aBill,
                  bBill,
                  cBill;

            //Initialize or input i.e. set variable values
            cout << "Input Package and Hours" << endl; // requesting input
            cin >> package; // declaringinput
            cin >> hours; 
            aHours = 10; 
            bHours = 20;
            bill = 0; 
            aBill = 9.95;
            bBill = 14.95; 
            cBill = 19.95; 

            //Map inputs -> outputs
            switch ( package )
            {
                case 'A': 
                    bill += aBill;
                    if ( hours > aHours )
                    {
                        bill += ( hours - aHours ) * 2; 
                    }
                    break;
                case 'B':
                    bill += bBill;
                    if ( hours > bHours )
                    {
                        bill += ( hours - bHours ) * 1; 
                    }
                    break;
                case 'C': 
                    bill += cBill;
                    break;
            }

            //Display the outputs
            cout << "Bill = $ " << bill; 
            break;
        }
        case '6':
        {
            cout << "Rock Paper Scissors Game" << endl;
            //Declare Variables
            char player1,
                 player2;

            //Initialize or input i.e. set variable values
            cout << "Input Player 1 and Player 2 Choices" << endl;
            cin >> player1;
            cin >> player2; 

            //Map inputs -> outputs
            switch ( player1 )
            {
                case 'R':
                case 'r':
                    switch ( player2 )
                    {
                        case 'P':
                        case 'p': 
                            cout << "Paper covers rock."; 
                            break;
                        case 'S':
                        case 's':
                            cout << "Rock breaks scissors.";
                            break;
                        case 'R':
                        case 'r':
                            cout << "Nobody wins."; 
                    }
                    break; 

                case 'P':
                case 'p':
                    switch ( player2 )
                    {
                        case 'P':
                        case 'p': 
                            cout << "Nobody wins."; 
                            break;
                        case 'S':
                        case 's':
                            cout << "Scissors cuts paper.";
                            break;
                        case 'R':
                        case 'r':
                            cout << "Paper covers rock."; 
                            break;
                    }
                    break;

                case 'S':
                case 's':
                    switch ( player2 )
                    {
                        case 'P':
                        case 'p': 
                            cout << "Scissors cuts paper."; 
                            break;
                        case 'S':
                        case 's':
                            cout << "Nobody wins.";
                            break;
                        case 'R':
                        case 'r':
                            cout << "Rock breaks scissors."; 
                            break;
                    }
                    break;
            }
            break;
        }
        case '7':
        {
            cout << "Arabic to Roman numeral conversion." << endl;
            //Declare Variables
            int year,
                n1,
                n10,
                n100,
                n1000;
            string rYear; 

            //Initialize or input i.e. set variable values
            cout << "Input the integer to convert." << endl; // requesting input
            cin >> year; // declaring input
            rYear = "";
            n1 = (year) % 10;
            n10 = (year/10) % 10;
            n100 = (year/100) % 10;
            n1000 = (year/1000) % 10; 


            //Map inputs -> outputs 

            // for the thousands place
            if ( n1000 == 1 )
            {
                rYear += "M";
            }
            else if ( n1000 == 2 )
            {
                rYear += "MM";
            }
            else if ( n1000 == 3 )
            {
                rYear += "MMMM";
            }

            // for the 100s point
            if ( n100 < 4 )
            {
                for ( int i = 0; i < n100; i++ )
                {
                    rYear += "C"; 
                }
            }
            else if ( n100 == 4) 
            {
                rYear += "CD"; 
            }
            else if ( n100 >= 5 && n100 < 9 )
            {
                rYear += "D";
                for ( int i = 0; i < n100 - 5; i++ )
                {
                    rYear += "C";
                }
            }
            else if ( n100 == 9 )
            {
                rYear += "CM"; 
            }

            // for the 10s point
            if ( n10 < 4 )
            {
                for ( int i = 0; i < n10; i++ )
                {
                    rYear += "X";
                }
            }
            else if ( n10 == 4 )
            {
                rYear += "XL";
            }
            else if ( n10 >= 5 && n10 < 9 )
            {
                rYear += "L";
                for ( int i = 0; i < n10 - 5; i++ )
                {
                    rYear += "X"; 
                }
            }
            else if ( n10 == 9 )
            {
                rYear += "XC";
            }

            // for the ones point
            if ( n1 < 4 ) 
            {
                for ( int i = 0; i < n1; i++ )
                {
                    rYear += "I";
                }
            }
            else if ( n1 == 4 )
            {
                rYear += "IV";
            }
            else if ( n1 >= 5 && n1 < 9 )
            {
                rYear += "V";
                for ( int i = 0; i < n1-5; i++ )
                {
                    rYear += "I";
                }
            }
            else if ( n1 == 9 )
            {
                rYear += "IX";
            }

            //Display the outputs
            if ( year < 1000 || year > 3000 )
            {
                cout << year << " is Out of Range!";
            }
            else 
            {
                cout << year << " is equal to " << rYear;

            }
            break;
        }
        case '8':
        {
            cout << "Horoscope Program which examines compatible signs." << endl; // name of project
            //Declare Variables
            string sign1,
                   sign2,
                   element1,
                   element2;

            //Initialize or input i.e. set variable values
            cout << "Input 2 signs." << endl; // requesting input
            cin >> sign1;
            cin >> sign2; 


            //Map inputs -> outputs
            //for fire
            if ( sign1 == "Aries" || sign1 == "Leo" || sign1 == "Sagittarius"  )
            {
                element1 = "Fire";
            }
            if ( sign2 == "Aries" || sign2 == "Leo" || sign2 == "Sagittarius" )
            {
                element2 = "Fire";
            }
            // for earth
            if ( sign1 == "Taurus" || sign1 == "Virgo" || sign1 == "Capricorn")
            {
                element1 = "Earth";
            }
            if ( sign2 == "Taurus" || sign2 == "Virgo" || sign2 == "Capricorn")
            {
                element2 = "Earth";
            }
            // for air
            if ( sign1 == "Gemini" || sign1 == "Libra" || sign1 == "Aquarius" )
            {
                element1 = "Air";
            }
            if ( sign2 == "Gemini" || sign2 == "Libra" || sign2 == "Aquarius")
            {
                element2 = "Air";
            }
            // for water
            if ( sign1 == "Cancer" || sign1 == "Scorpio" || sign1 == "Pisces")
            {
                element1 = "Water";
            }
            if ( sign2 == "Cancer" || sign2 == "Scorpio" || sign2 == "Pisces" )
            {
                element2 = "Water";
            }

            if ( element1 == element2 )
            {
                cout << sign1 << " and " << sign2 << " are compatible " << element1 << " signs."; 
            }
            else 
            {
                cout << sign1 << " and " << sign2 << " are not compatible signs."; 
            }
            break;
        }
        default:
        {
            cout<<"Not an Option"<<endl; 
        }
    }
    // Exit the Program - Cleanup
    return 0;
}

