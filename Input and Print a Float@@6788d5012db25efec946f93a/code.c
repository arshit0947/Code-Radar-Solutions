#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a; // Declare a variable to store input
    printf("%s\n", welcome()); // Print the welcome message
    
    printf("Enter a number: ");
    scanf("%d", &a); // Corrected scanf statement

    printf("You entered: %d\n", a); // Corrected printf statement

    return 0;
}
