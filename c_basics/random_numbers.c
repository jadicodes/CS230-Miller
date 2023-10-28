// Write a program that generates and displays n random numbers between 0 and 1,
// where n is a number input by the user. Your program should make use of a
// generateRand function that receives n as parameter and prints n random numbers.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void generateRand(int n) {
    for (int i = 0; i < n; i++) {
        double randomNum = (double)rand() / RAND_MAX;
        printf("%.4lf\n", randomNum);
    }
}

int main() {
    int n;

    printf("Enter the number of random numbers to generate: ");
    scanf("%d", &n);

    srand(time(NULL));

    if (n > 0) {
        generateRand(n);
    } else {
        printf("Please enter a valid positive number.\n");
    }

    return 0;
}