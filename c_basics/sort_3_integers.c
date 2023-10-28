// Write a program in which your main function prompts for and reads three integers, and
// then calls a sort function passing the three integers. The sort function should display the
// three values in ascending order. Test your program with several different triplets of
// integers to make sure it works for all cases.

#include <stdio.h>

void sort(int *a, int *b, int *c) {
    if (*a > *b) {
        int temp = *a;
        *a = *b;
        *b = temp;
    }
    if (*b > *c) {
        int temp = *b;
        *b = *c;
        *c = temp;
    }
    if (*a > *b) {
        int temp = *a;
        *a = *b;
        *b = temp;
    }
}

int main() {
    int num1, num2, num3;

    printf("Enter three integers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    sort(&num1, &num2, &num3);

    printf("Sorted in ascending order: %d, %d, %d\n", num1, num2, num3);

    return 0;
}