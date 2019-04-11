#pragma once
#include <string>

class FBullCowGame
{
public:
	FBullCowGame(); // constructor

	int GetMaxAttempts() const;
	int GetCurrentAttempt() const;
	bool IsGameWon() const;

	void Reset(); // TODO return val
	bool CheckGuessValidity(std::string);

private:
	int MyCurrentAttempt;
	int MyMaxAttempts;
};