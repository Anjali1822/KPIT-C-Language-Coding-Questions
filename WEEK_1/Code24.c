/* Write a program to print out all Armstrong numbers between 1 and 
500. If sum of cubes of each digit of the number is equal to the 
number itself, then the number is called an Armstrong number. For 
example, 153 = ( 1 * 1 * 1 ) + ( 5 * 5 * 5 ) + ( 3 * 3 * 3 ). */
#include <stdio.h>

int main() {
    int num, originalNumber, remainder, result = 0;

    printf("Armstrong numbers between 1 and 500:\n");

    for (num = 1; num <= 500; ++num) {
        originalNumber = num;
        result = 0;
     
        while (originalNumber != 0) {
            remainder = originalNumber % 10;
            result += remainder * remainder * remainder;
            originalNumber /= 10;
        }
        if (result == num) {
            printf("%d\t", num);
        }
    }
    return 0;
}
/*OUTPUT:
Armstrong numbers between 1 and 500:
1       153     370     371     407*/