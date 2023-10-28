// Create a program that asks the user two numbers and outputs a message with their sum.
// For example, if the user inputs 3 and 4 then the program should display:
// The sum is: 7

#include <stdio.h>

int main() {
	int num1;
	int num2;
	printf("First number: ");
	scanf("%d", &num1);
	printf("Second number: ");
	scanf("%d", &num2);
	int sum;
	sum = num1 + num2;
	printf("The sum is: %d", sum);
