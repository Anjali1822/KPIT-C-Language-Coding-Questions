/*Write a program to enter numbers till the user wants. At the end it 
should display the count of positive, negative and zeros entered. */
#include <stdio.h>

int main() {
    int num, positives = 0, negatives = 0, zeros = 0;
    char choice;

    do {
        printf("Enter a number: ");
        scanf("%d", &num);

        if (num > 0) {
            positives++;
        } else if (num < 0) {
            negatives++;
        } else {
            zeros++;
        }

        printf("Do you want to enter another number? (y/n): ");
        scanf(" %c", &choice);
    } while (choice == 'y' || choice == 'Y');

    printf("Count of positive numbers: %d\n", positives);
    printf("Count of negative numbers: %d\n", negatives);
    printf("Count of zeros: %d\n", zeros);

    return 0;
}
/*OUTPUT:
Enter a number: 3
Do you want to enter another number? (y/n): y
Enter a number: -4
Do you want to enter another number? (y/n): y
Enter a number: 0
Do you want to enter another number? (y/n): n
Count of positive numbers: 1
Count of negative numbers: 1
Count of zeros: 1*/