// Fill out your copyright notice in the Description page of Project Settings.
#include "BullCowCartridge.h"

void UBullCowCartridge::BeginPlay() // When the game starts
{
    Super::BeginPlay();

    SetupGame();
    // PrintLine(TEXT("The HiddenWord is: %s. \nIt is %i Characters Long"), *HiddenWord, HiddenWord.Len()); // Debug Line

    PrintLine(TEXT("Welcome to the land of cows!"));
    PrintLine(TEXT("Hit 'Tab' to activate this computer sign"));
    PrintLine(TEXT("Then Type a %i letter word and hit Enter!"), HiddenWord.Len());

    

}

void UBullCowCartridge::OnInput(const FString& Input) // When the player hits enter
{
    ClearScreen();

    if (Input == HiddenWord) // Check Guess for Correctness
    {
        PrintLine(TEXT("Input Matches Hidden Word"));  // Guess is Correct
    } 
    else 
    {
        if (Input.Len() != HiddenWord.Len())
        {
            PrintLine(TEXT("The Hidden word is %i characters long. Try again!"), HiddenWord.Len());
        }

        PrintLine(TEXT("You Have Lost")); // Guess is Incorrect
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

void UBullCowCartridge::SetupGame()
{
    HiddenWord = TEXT("isogram");
    Lives = 5;
}

