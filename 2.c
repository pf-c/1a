#include <stdio.h>

// Function to find maximum
int findMax(int a, int b, int c) {
    int max = a;
    if (b > max)
        max = b;
    if (c > max)
        max = c;
    return max;
}

// Function to find minimum
int findMin(int a, int b, int c) {
    int min = a;
    if (b < min)
        min = b;
    if (c < min)
        min = c;
    return min;
}

int main() {
    int num1, num2, num3;

    // Input from user
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    printf("Enter the third number: ");
    scanf("%d", &num3);

    // Find maximum and minimum
    int max_num = findMax(num1, num2, num3);
    int min_num = findMin(num1, num2, num3);

    // Display the results
    printf("Maximum number: %d\n", max_num);
    printf("Minimum number: %d\n", min_num);

    return 0;
}
