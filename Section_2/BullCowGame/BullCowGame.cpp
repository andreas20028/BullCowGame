#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

void PrintIntro();
void PlayGame();
string GetGuess();
bool AskToPlayAgain();

int main()
{	
	PrintIntro();
	
	PlayGame();
	
	AskToPlayAgain();
	
	//int x;
	//cin >> x;
	return 0;
}



//introduction
void PrintIntro() 
{
	constexpr int WORD_LENGTH = 9;
	cout << "Welcome to Bulls and Cows, a fun word game!" << endl;
	cout << "Can you guess the " << WORD_LENGTH << " letter isogram I'm thinking of?" << endl;
	cout << endl;
	return;
}

void PlayGame() 
{
	constexpr int TURNS = 5;
	for (int i = 1; i <= TURNS; i++) 
	{
		string Guess = GetGuess();
		cout << "Your guess was: " << Guess << endl;
		cout << endl;
	}
}

//get a guess from the user and print it back
string GetGuess() 
{
	cout << "Type your guess: ";
	string Guess = "";
	getline(cin, Guess);	
	return Guess;
}

bool AskToPlayAgain() 
{
	cout << "Do you want ot play again?";
	string Response = "";
	getline(cin, Response);

    return (Response[0]=='y' || Response[0]=='Y'); //Return true if Response[0]=='y', false if Response[0]!='y'
	
}


