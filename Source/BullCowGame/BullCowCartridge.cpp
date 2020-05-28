// Fill out your copyright notice in the Description page of Project Settings.
#include "BullCowCartridge.h"

void UBullCowCartridge::BeginPlay() // When the game starts
{
    Super::BeginPlay();

    PrintLine(TEXT("Welcome to the land of cows!"));
    PrintLine(TEXT("Hit 'Tab' to activate this computer sign"));
    PrintLine(TEXT("Then Type something and hit Enter!"));

    InitGame();

    // Prompt Player for Guess
}

void UBullCowCartridge::OnInput(const FString& Input) // When the player hits enter
{
    ClearScreen();
    PrintLine(Input); 


    // Check Guess For Valid Isogram
        // Prompt to Try Again if Not Isogram
    
    // Check Guess For Correct Number of Characters
        // Prompt to Try Again if # of Chars is not right

        

    if (Input == HiddenWord) // Check Guess for Correctness
    {
        PrintLine(TEXT("Input Matches Hidden Word"));  // Guess is Correct
    } else 
    {
        PrintLine(TEXT("Input Doesn't Match Hidden Word")); // Guess is Incorrect
        // Lose 1 Life
        // Check if Lives = 0
            // Game Over if Lives = 0
                // Show HiddenWord as part of Game Over
                // Quit
            // Repeat Current Level if Lives > 0
                // Show updated 'lives left' count as part of Repeating Current Level
                // Prompt: 'Press Enter to play again'
                


    }
}

void UBullCowCartridge::InitGame()
{
    HiddenWord = TEXT("isogram");
    Lives = 5;
}

