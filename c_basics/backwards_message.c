// Create a program gets a message from the user and then prints it out backwards. For
// example, if the user enters the text: Now, the program outputs: woN

#include <stdio.h>
#include <string.h>

int main() {
    char message[100];

    printf("Enter a message: ");
    fgets(message, sizeof(message), stdin);

    int length = strlen(message);

    printf("Reversed message: ");
    for (int i = length - 1; i >= 0; i--) {
        printf("%c", message[i]);
    }
    
    printf("\n");

    return 0;
}