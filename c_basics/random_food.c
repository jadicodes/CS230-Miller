// Create a program with an array of strings of size 5. Each index of the array must hold the
// name of a different food you like. Every time the program is executed, a random food
// from the array must be output.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    const char *foods[] = {"Pizza", "Sushi", "Burger", "Taco", "Pasta"};

    srand(time(NULL));
    int randomIndex = rand() % 5;

    printf("Random food choice: %s\n", foods[randomIndex]);

    return 0;
}


