/* 
 * File:   main.cpp
 * Author: Elijah De Vera
 * Created on January 14, 2021, 12:36 PM
 * Purpose:  Rock Paper Scissors Game
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    
    cout << "Rock Paper Scissors Game" << endl;
    
    //Set the random number seed
    
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
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}
