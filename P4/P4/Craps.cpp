#include "Header.h"


void WriteHeader()
{
	cout << "Hello: " << AskForName() << endl;
	cout << "Title: Craps game" << endl;
	cout << "Objective: Throw dice to win your bet" << endl;
}
void ShowRules()
{
	cout << "\n Start with a bet: ";
	cout << "\n All craps games begin with a 'pass line' bet. Here, you bet that the dice will land on a 7 or 11 ('pass the line') or on a 2, 3, or 12 ('don't pass'). " << endl;
	cout << "\n Roll The Dice: ";
	cout << "\n The shooter will start the game with the first roll of the dice, known as the 'comeout roll'. ";
	cout << "\n Check your first bets: ";
	cout << "\n If the dice lands on 7 or 11 on the comeout roll, pass line bets instantly win " <<
		"\n if the dice lands on a combined 2, 3, or 12 you lsoe " << endl << endl;
	cout << "\n Add to your bets: ";
	cout << "\n then bet on the dice landing the point, landing on different numbers, or losing completely by landing on 7." << endl;
	cout << "\n End the round: ";
	cout << "\n the point is rolled before a 7, all pass line bets will win. If a 7 is rolled before the point, all pass line bets will lose" << endl << endl;
}
string AskForName()

{
	string name;
	cout << "\n Please enter your name :";
	cin >> name;
	return name;

}
double EnterYourBet()
{
	double bet;
	cout << "Enter bet amount: ";
	cin >> bet;
	return bet;
}
int ThrowDice() 
{
	int n1 = 1 + rand() % 6;
	int n2 = 1 + rand() % 6;
	return n1 + n2;
}
bool PlayPointRound(int dice) 
{
	while (true) {
		int d = ThrowDice();
		cout << "then roll " << d << ",";
		if (d == dice) {
			cout << "roll " << dice << " again. You win, ";
			return true;
		}
		if (d == 7) {
			cout << "You lose. ";
			return false;
		}
	}
}
bool MakeYourPlay() 
{
	int dice = ThrowDice();
	cout << "roll " << dice << ", ";
	if (dice == 7 || dice == 11) {
		cout << "you win, ";
		return true;
	}
	return PlayPointRound(dice);
}
double UpdateBalance(bool didWin, double bet) 
{
	if (didWin)
		return bet;
	return 0.0;
}