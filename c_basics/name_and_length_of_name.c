// Create a program that asks the user his name and outputs a welcoming message including
// his name and the number of letters in his name. For example, if the user inputs Fonteles
// as his name, then the program should display:
// Hello, Fonteles, your name has 8 letters!

#include <stdio.h>
#include <string.h>

int main() {
	char name[100];
	int letters = 0;
	int name_length;
	printf("Enter your name: ");
	scanf("%s", name);
	name_length = strlen(name);
    
	for (int i = 0; i < name_length; i++){
    		letters++;
	}
	printf("Hello, %s, your name has %d letters!", name, letters);


