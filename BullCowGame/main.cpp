#include <iostream>
#include <string>

using namespace std;

void PrintIntro();
void PlayGame();
string GetGuess();
void PrintGuess();
bool PlayAgain();

int main()
{
	do
	{
		PrintIntro();
		PlayGame();
	} while (PlayAgain());

	return 0;
}

void PlayGame()
{
	constexpr int CHANCES = 5;

	for (int i = 1; i <= CHANCES; i++)
	{
		PrintGuess();
	}
}

void PrintIntro() 
{
	constexpr int WORD_LENGTH = 5;

	// Introduce the game
	cout << "Welcome to Bulls and Cows\n";
	cout << "Can you guess the " << WORD_LENGTH;
	cout << " letter isogram I'm thinking of?\n";
	
	return;
}

string GetGuess() 
{
	cout << "Enter your guess: ";
	
	string userGuess = "";
	getline(cin, userGuess);
	
	return userGuess;
}

void PrintGuess()
{
	// Repeat Guess back
	cout << "You guessed: " << GetGuess() << endl; 
	cout << endl;
	return;
}

bool PlayAgain()
{
	cout << "Would you like to play again? (y/n) ";
	string res = "";
	getline(cin, res);
	return (res[0] == 'y' || res[0] == 'Y');
}