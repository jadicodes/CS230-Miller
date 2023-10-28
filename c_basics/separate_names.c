// Write a program that allows the user to input his or her full name and outputs them
// separately. For example, if the user inputs André Fonteles:
// First name: André
// Last name: Fonteles

#include <stdio.h>

int main() {
    char fullName[100];

    printf("Enter your full name: ");
    scanf("%s %s", fullName, fullName + 50);

    printf("First name: %s\n", fullName);
    printf("Last name: %s\n", fullName + 50);

    return 0;
}
