#pragma once
#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#include <string>
#include <iostream>
#include <sstream>
using namespace std;





void WriteHeader();
void ShowRules();
string AskForName();
double EnterYourBet();
bool MakeYourPlay();
int	ThrowDice();
bool PlayPointRound(int dice);
double UpdateBalance(bool didWin, double bet);
#endif