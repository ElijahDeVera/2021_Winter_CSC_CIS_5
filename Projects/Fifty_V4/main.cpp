/* 
 * File: main.cpp
 * Author: Elijah De Vera
 * Date: February 02, 2021
 * Purpose: Project 1 Dice Game (fifty)
 * Version: 4
 */

//Version 4 now implements input output files

//System Libraries - Post Here
#include <iostream> //input output library
#include <iomanip>  //formatting
#include <cstdlib>  //random srand to set the seed
#include <ctime>    //time for rand
#include <cmath>    //math functions
#include <fstream>  //file I/O
using namespace std;

//Global Constants
const float PERCENT=100.0f; //conversion to percent;

//Execution Begins Here
int main(int argc, char** argv) {
    
    cout<<"Hello, This is the Dice Game called Fifty."<<endl;
    
    //Declare variables or constants here
    //7 characters or less
    ifstream in;  //input file
    ofstream out; //output file
    char p1Dice1, // player 1 dice 1
         p1Dice2, // player 1 dice 2
         p2Dice1, // player 2 dice 1
         p2Dice2, // player 2 dice 2
         help,    // player instructions
         inp;     // play again feature
    int p1score, // player 1 score 
        p2score, // player 2 score
        games,   // amount of games 
        p1Doub,  // player 1 double roll count
        p2Doub;  // player 2 double roll count
    string rules,// string for rules
           inFlNm, // input string file name
           outFlNm;// output string file name
    float p1Eff,  // player 1 efficiency rate
          p2Eff,  // player 2 efficiency rate
          turns,  // amount of turns 
          p1w,    // player 1 win count
          p2w,    // player 2 win count
          p1wRate,// player 1 win rate
          p2wRate;// player 2 win rate
    bool read; //input for reading rules   
    
    //Uses current time as seed for random generator
    srand(time(0)); //time the game play
  
    //Initializing variables
    rules = "This program will simulate the dice game Fifty which requires "
            "2 players with each player taking turns to roll 2 die. \n"
            "The goal of Fifty is to be the first player to reach 50 points. "
            "You get points by rolling doubles. \n"
            "All doubles except 3s and 6s score 5 points. Double 6s are worth"
            "25 points and double 3s wipe out the players entire score \n"
            "and the player must start again at 0. Non-double rolls are 0 "
            "points.";
    inFlNm="prjIn.dat"; //opening file name
    outFlNm="prjOut.dat";
    in.open(inFlNm); //file name opening
    out.open(outFlNm); //file name opening
    in>>p1Doub; //starting value for wins from input file
    in>>p2Doub; //starting value for wins from input file
    in>>turns;  //turns amount from input file

    //Asking user if they need instructions on how to play
    cout<<"Would you like me to explain the rules? (y/n)"<<endl;
    cin>>help;      //input char for output rules
    if(help=='y'){  //independent if
        read=true;  //setting char input into a boolean 
    }
    switch(read){   //switch case for rules output
        case 1:     //reading if boolean is equal to true
            cout<<rules<<endl<<endl;//outputs rules if true
            break;
    }
    
    //Process inputs  - map to outputs here 
    cout<<endl<<"Would you like to play? (y/n)"<<endl;
    cin>>inp;
    while( inp=='y' ){
        cout<<endl<<"How many games would you like to play?"<<endl;
        cin>>games; // input for amount of games
        p1w=p2w=0;  // resets win counter
        for ( int i=1; i<=games; i++ ){     //will play amount of games user has input
            cout<<"-----------Round "<<i<<"----------"<<endl<<endl;

            //resets score each round
            p1score=0;
            p2score=0;

            do{
                cout<<"Player 1 dice roll"<<endl; // rolling first player pair of dice
                p1Dice1=rand()%6+1;
                p1Dice2=rand()%6+1;
                cout<<"Die 1: "<<static_cast<int>(p1Dice1)<<endl
                    <<"Die 2: "<<static_cast<int>(p1Dice2)<<endl; //outputs die values
                //dice rolls must equal to each other in order to score
                if ( p1Dice1==p1Dice2 ){
                    p1Doub++;
                    if ( p1Dice1!=3 && p1Dice1!=6 ){ //doesnt roll a pair of 3 or 6
                        p1score+=5;
                    }
                    else if ( p1Dice1==3 ){ // rolls a pair of 3s
                        p2score=0;
                        cout<<"Oh no player 2 score is reset to 0!!!"<<endl;
                    }
                    else if ( p1Dice1==6 ){ // rolls a pair of 6s
                        p1score+=25;
                    }
                }

                cout<<"Player 2 dice roll"<<endl; // rolling first player pair of dice
                p2Dice1=rand()%6+1;
                p2Dice2=rand()%6+1;
                cout<<"Die 1: "<<static_cast<int>(p2Dice1)<<endl
                    <<"Die 2: "<<static_cast<int>(p2Dice2)<<endl; //outputs die values
                //dice rolls must equal to each other in order to score
                if ( p2Dice1==p2Dice2 ){
                    p2Doub++;
                    if ( p2Dice1!=3 && p2Dice1!=6 ){ //doesnt roll a pair of 3 or 6
                        p2score+=5;
                    }
                    else if ( p2Dice1==3 ){ // rolls a pair of 3s
                        p1score=0;
                        cout<<"Oh no player 1 score is reset to 0!!!"<<endl;
                    }
                    else if ( p2Dice1==6 ){ // rolls a pair of 6s
                        p2score+=25;
                    }
                }
                
                //displays score every turn
                cout<<endl;
                cout<<"Player 1 points: "<<p1score<<endl;
                cout<<"Player 2 points: "<<p2score<<endl<<endl;
                turns++;

            }while ((p1score<50 && p2score<50) && i<=games);
            
            //displays the winner
            if ( p1score>p2score ){
                cout<<"********"
                      "Congratulations! Player 1 is the winner!"
                      "********"<<endl<<endl;   //displays winner of that game
                p1w++;
            }
            else{
                cout<<"********"
                      "Congratulations! Player 2 is the winner!"
                      "********"<<endl<<endl;   //displays winner of that game
                p2w++;
            }
        }
        
        //calculating efficiency of doubles for both pllayers
        p1Eff=p1Doub/turns*PERCENT;
        p2Eff=p2Doub/turns*PERCENT;
        //calculating win rate for both players
        p1wRate=p1w/games*PERCENT;
        p2wRate=p2w/games*PERCENT;
        
        
        //outputs for all statistics calculated
        cout<<"****************************************"<<endl;
        cout<<"***********RESULTS/STATISTICS***********"<<endl;
        cout<<"****************************************"<<endl;
        cout<<setprecision(2)<<fixed;   //formatting for percentages
        cout<<"____________EFFICIENCY ROLLS____________"<<endl;
        cout<<"(The rate of doubles rolled in all games)"<<endl;
        cout<<"Player 1: "<<p1Eff<<"%"<<endl;
        cout<<"Player 2: "<<p2Eff<<"%"<<endl;
        cout<<"________________________________________"<<endl;
        cout<<"****************************************"<<endl;
        cout<<"****************************************"<<endl;
        cout<<"****************************************"<<endl;
        cout<<"_________________WIN RATE_______________"<<endl;
        cout<<"Total Games: "<<noshowpoint<<games<<endl;
        cout<<"Player 1 total wins: "<<noshowpoint<<static_cast<int>(p1w)<<endl;
        cout<<"Player 2 total wins: "<<noshowpoint<<static_cast<int>(p2w)<<endl;
        cout<<"Player 1 win rate: "<<p1wRate<<"%"<<endl;
        cout<<"Player 2 win rate: "<<p2wRate<<"%"<<endl;
        cout<<"________________________________________"<<endl;
        cout<<"****************************************"<<endl;
        cout<<"****************************************"<<endl;
        cout<<"****************************************"<<endl<<endl;
        
        //outputs for all statistics calculated to a file
        out<<"****************************************"<<endl;
        out<<"***********RESULTS/STATISTICS***********"<<endl;
        out<<"****************************************"<<endl;
        out<<setprecision(2)<<fixed;   //formatting for percentages
        out<<"____________EFFICIENCY ROLLS____________"<<endl;
        out<<"(The rate of doubles rolled in all games)"<<endl;
        out<<"Player 1: "<<p1Eff<<"%"<<endl;
        out<<"Player 2: "<<p2Eff<<"%"<<endl;
        out<<"________________________________________"<<endl;
        out<<"****************************************"<<endl;
        out<<"****************************************"<<endl;
        out<<"****************************************"<<endl;
        out<<"_________________WIN RATE_______________"<<endl;
        out<<"Total Games: "<<noshowpoint<<games<<endl;
        out<<"Player 1 total wins: "<<noshowpoint<<static_cast<int>(p1w)<<endl;
        out<<"Player 2 total wins: "<<noshowpoint<<static_cast<int>(p2w)<<endl;
        out<<"Player 1 win rate: "<<p1wRate<<"%"<<endl;
        out<<"Player 2 win rate: "<<p2wRate<<"%"<<endl;
        out<<"________________________________________"<<endl;
        out<<"****************************************"<<endl;
        out<<"****************************************"<<endl;
        out<<"****************************************"<<endl<<endl;
        
        //play again feature
        cout<<"Would you like to play again? (y/n)"<<endl;
        cin>>inp;
    }
    //message for the end of the game
    cout<<endl<<"Goodbye";
    //Exit stage left
    in.close(); //closing files
    out.close();//closing files
    return 0;
}

