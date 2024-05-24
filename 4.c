#include <stdio.h>

// Function to convert Celsius to Fahrenheit
float celsiusToFahrenheit(float celsius) {
    return (celsius * 9 / 5) + 32;
}

// Function to convert Fahrenheit to Celsius
float fahrenheitToCelsius(float fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}

int main() {
    float temperature;
    char choice;

    // Input from user
    printf("Enter 'C' to convert from Celsius to Fahrenheit\n");
    printf("Enter 'F' to convert from Fahrenheit to Celsius\n");
    printf("Your choice: ");
    scanf(" %c", &choice);

    // Convert based on user's choice
    if (choice == 'C' || choice == 'c') {
        printf("Enter temperature in Celsius: ");
        scanf("%f", &temperature);
        printf("Temperature in Fahrenheit: %.2f\n", celsiusToFahrenheit(temperature));
    } else if (choice == 'F' || choice == 'f') {
        printf("Enter temperature in Fahrenheit: ");
        scanf("%f", &temperature);
        printf("Temperature in Celsius: %.2f\n", fahrenheitToCelsius(temperature));
    } else {
        printf("Invalid choice.\n");
    }

    return 0;
}
