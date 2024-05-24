/*Twenty-five numbers are entered from the keyboard into an array. 
Write a program to find out how many of them are positive, how 
many are negative, how many are even and how many odd.  */
#include <stdio.h>

int main() {
    int numbers[25];
    int positive = 0, negative = 0, even = 0, odd = 0;

    printf("Enter 25 numbers:\n");
    for (int i = 0; i < 25; i++) {
        scanf("%d", &numbers[i]);
    }

    for (int i = 0; i < 25; i++) {
        if (numbers[i] > 0) {
            positive++;
        } else if (numbers[i] < 0) {
            negative++;
        }
        if (numbers[i] % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    }
    printf("Number of positive numbers: %d\n", positive);
    printf("Number of negative numbers: %d\n", negative);
    printf("Number of even numbers: %d\n", even);
    printf("Number of odd numbers: %d\n", odd);

    return 0;
}
