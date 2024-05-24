#include <stdio.h>

int main() {
    int number;

    // Input from user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Check if the number is odd or even and negative or positive
    if (number % 2 == 0) {
        // Even number
        if (number >= 0) {
            printf("Even number %d is positive.\n", number);
        } else {
            printf("Even number %d is negative.\n", number);
        }
    } else {
        // Odd number
        if (number >= 0) {
            printf("Odd number %d is positive.\n", number);
        } else {
            printf("Odd number %d is negative.\n", number);
        }
    }

    return 0;
}
