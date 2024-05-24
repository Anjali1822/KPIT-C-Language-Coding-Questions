/* Write macro definitions with arguments for calculation of Simple 
Interest and Amount. Store these macro definitions in a file 
“interest.h”. Include this file in your program, and use the macro 
definitions for calculating Simple Interest and Amount.*/

// main.c

#include <stdio.h>
#include "interest.h"

int main() {
    float principal = 1000, rate = 5, time = 2;
    float interest = SIMPLE_INTEREST(principal, rate, time);
    float total_amount = AMOUNT(principal, interest);

    printf("Principal: %.2f\n", principal);
    printf("Rate: %.2f\n", rate);
    printf("Time: %.2f\n", time);
    printf("Simple Interest: %.2f\n", interest);
    printf("Total Amount: %.2f\n", total_amount);

    return 0;
}
/*OUTPUT:
Principal: 1000.00
Rate: 5.00
Time: 2.00
Simple Interest: 100.00
Total Amount: 1100.00*/