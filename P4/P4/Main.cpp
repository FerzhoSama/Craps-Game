/*
* Adding the values for Header.h:
* void WriteHeader and values
void ShowRules
string AskForName
double EnterYourBet
bool MakeYourPlay
int	ThrowDice
bool PlayPointRound
double UpdateBalance
Adding the user information Craps.cpp:
Void the The values of the user programs 
string name of the user 
double the bet of the user (money)
int Trow the dice by two different dice with a 6 number
*/







#include<iostream>
#include "Header.h"

using namespace std;
int main() {
    srand(time(0));
    char ch = ' ';
    WriteHeader();
    ShowRules();
    double bet = EnterYourBet();
    double totalBetWon = 0.0;
    do {
        bool result = MakeYourPlay();
        totalBetWon += UpdateBalance(result, bet);
        cout << "then play another game(y/n): ";
        cin >> ch;
    } while (ch != 'N' && ch != 'n');
    cout << "You won total bet: " << totalBetWon << endl;
    return 0;
}