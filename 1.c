#include <stdio.h>

// Function to calculate square
int squareNumber(int num) {
    return num * num;
}

int main() {
    int number;

    // Input from user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Display the square of the number
    printf("The square of %d is %d\n", number, squareNumber(number));

    return 0;
}
