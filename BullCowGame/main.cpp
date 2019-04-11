#include <iostream>
#include <string>
#include "FBullCowGame.h"

FBullCowGame BCGame; // init new

void PrintIntro();
void PlayGame();
std::string GetGuess();
void PrintGuess();
bool PlayAgain();

int main()
{
	do
	{
		PrintIntro();
		PlayGame();
		// TODO: Add Game Summary
	} while (PlayAgain());

	return 0;
}

void PlayGame()
{
	BCGame.Reset();
	int MaxAttempts = BCGame.GetMaxAttempts();

	for (int i = 1; i <= MaxAttempts; i++)
	{
		std::cout << "Try " << i << std::endl;
		PrintGuess();
	}
}

void PrintIntro() 
{
	constexpr int WORD_LENGTH = 5;

	// Introduce the game
	std::cout << "Welcome to Bulls and Cows\n";
	std::cout << "Can you guess the " << WORD_LENGTH;
	std::cout << " letter isogram I'm thinking of?\n";
	
	return;
}

std::string GetGuess() 
{
	int CurrentTry = BCGame.GetCurrentAttempt();

	std::cout << "Enter your guess: ";
	
	std::string userGuess = "";
	std::getline(std::cin, userGuess);
	
	return userGuess;
}

void PrintGuess()
{
	// Repeat Guess back
	std::cout << "You guessed: " << GetGuess() << std::endl; 
	std::cout << std::endl;
	return;
}

bool PlayAgain()
{
	std::cout << "Would you like to play again? (y/n) ";
	std::string res = "";
	std::getline(std::cin, res);
	return (res[0] == 'y' || res[0] == 'Y');
}