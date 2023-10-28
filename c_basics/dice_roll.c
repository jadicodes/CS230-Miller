// Create a program that simulates dice rolling. It should start by outputing a random
// number between 1 and 6. Then it asks if the user wants to roll again by inputting the
// letter y. The program keeps rolling dice for as long as the user chooses y. Any other
// input should terminate the program. Don’t forget to output a farewell message before
// the end.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    char choice;

    do {
        int roll = (rand() % 6) + 1;
        printf("You rolled a %d\n", roll);
        
        printf("Roll again? (y/n): ");
        scanf(" %c", &choice); // Notice the space before %c to consume the newline character from the previous input
    } while (choice == 'y' || choice == 'Y');

    printf("Goodbye!\n");

    return 0;
}

