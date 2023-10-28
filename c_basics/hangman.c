// Create a hangman game. You don’t need to draw the hangman, but you must limit the
// number of times the user can give a wrong answer.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_TRIES 6

int main() {
    char wordToGuess[] = "hangman";
    char guessedWord[] = "_______";
    char guessedLetters[MAX_TRIES] = {0};
    int numTries = 0;

    printf("Welcome to Hangman!\n");

    while (1) {
        printf("\nWord to guess: %s\n", guessedWord);
        printf("Guessed letters: %s\n", guessedLetters);
        printf("Tries remaining: %d\n", MAX_TRIES - numTries);

        char guess;
        printf("Guess a letter: ");
        scanf(" %c", &guess); 

        int found = 0;
        for (int i = 0; i < strlen(wordToGuess); i++) {
            if (wordToGuess[i] == guess && guessedWord[i] == '_') {
                guessedWord[i] = guess;
                found = 1;
            }
        }

        if (!found) {
            printf("Incorrect guess!\n");
            guessedLetters[numTries] = guess;
            numTries++;
        }

        // Check for win or lose conditions
        if (strcmp(guessedWord, wordToGuess) == 0) {
            printf("\nCongratulations! You guessed the word: %s\n", wordToGuess);
            break;
        }

        if (numTries == MAX_TRIES) {
            printf("\nYou're out of tries. The word was: %s\n", wordToGuess);
            break;
        }
    }

    return 0;
}

