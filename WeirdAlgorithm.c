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
        printf(" -> %d", num); // Print each number with an arrow
    }
    printf("\n");
}

int main() {
    int number;
    
    printf("Enter a positive integer: ");
    if (scanf("%d", &number) != 1) {
        printf("Invalid input! Please enter a number.\n");
        return 1;
    }

    generateWeirdness(number);

    return 0;
}
