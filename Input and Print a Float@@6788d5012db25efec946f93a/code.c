#include <stdio.h>

int main() {
    float num; // Declare a float variable

    // Prompt the user for input
    printf("Enter a float number: ");
    scanf("%f", &num); // Read the float input

    // Display the entered float number
    printf("You entered: %.2f\n", num); // Print with 2 decimal places

    return 0;
}
