#include <stdio.h>

void generateWeirdness(long long num) {
    if (num <= 0) {
        printf("Please enter a valid positive number!\n");
        return;
    }

    printf("%lld", num); // Print the first number

    while (num != 1) {
        if (num % 2 == 0) {
            num /= 2;
        } else {
            num = num * 3 + 1;
        }
        printf(" %lld", num); // Print space-separated numbers
    }
    printf("\n"); // Move to a new line after printing sequence
}

int main() {
    long long number;
    
    if (scanf("%lld", &number) != 1 || number <= 0) { // Ensure valid input
        return 1;
    }

    generateWeirdness(number);

    return 0;
}