#include <stdio.h>
 
void generateWeirdness(int num) {
    if (num <= 0) {
        printf("Please enter a valid positive number!\n");
        return;
    }
 
    printf("%d", num); // Print the first number
 
    while (num != 1) {
        if (num % 2 == 0) {
            num /= 2;
        } else {
            num = num * 3 + 1;
        }
        printf(" %d", num); // Print space-separated numbers
    }
    printf("\n"); // Move to a new line after printing sequence
}
 
int main() {
    int number;
    
    if (scanf("%d", &number) != 1 || number <= 0) { // Ensure valid input
        return 1;
    }
 
    printf("\n");  // Ensure a new line before printing output
 
    generateWeirdness(number);
 
    return 0;
}
