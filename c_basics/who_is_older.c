// Create a program that lets the user input the name and age of two persons. The
// program should output the name of the oldest.

#include <stdio.h>

int main() {
	char name1[100];
	char name2[100];
	int age1;
	int age2;
    
	printf("Enter the name of person 1: ");
	scanf("%s", &name1);
    
	printf("Enter the age of person 1: ");
	scanf("%d", &age1);
    
	printf("Enter the name of person 2: ");
	scanf("%s", &name2);
    
	printf("Enter the age of person 2: ");
	scanf("%d", &age2);
    
	if (age1 > age2){
    		printf("Oldest: %s", name1);
	}
	if (age1 == age2){
    		printf("Same age.");
	}
	if (age1 < age2){
    		printf("Oldest: %s", name2);
	}
	return 0;
}
