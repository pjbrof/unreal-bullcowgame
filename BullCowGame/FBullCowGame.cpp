#include "FBullCowGame.h"

FBullCowGame::FBullCowGame()
{
	MyCurrentAttempt = 1;
	MyMaxAttempts = 8;
}

int FBullCowGame::GetMaxAttempts() const { return MyMaxAttempts; }
int FBullCowGame::GetCurrentAttempt() const { return MyCurrentAttempt; }

bool FBullCowGame::IsGameWon() const
{
	return false;
}

void FBullCowGame::Reset()
{
	return;
}

bool FBullCowGame::CheckGuessValidity(std::string)
{
	return false;
}
