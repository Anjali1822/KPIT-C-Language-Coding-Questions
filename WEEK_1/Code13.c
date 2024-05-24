/*Write a program to find the absolute value of a number entered 
through the keyboard. */
#include <stdio.h>
#include <math.h>

int main() {
    double number, absolute_value;

    printf("Enter a number: ");
    scanf("%lf", &number);

    absolute_value = fabs(number);

    printf("The absolute value of %.2f is %.2f\n", number, absolute_value);

    return 0;
}
/*OUTPUT:
Enter a number: -3.14
The absolute value of -3.14 is 3.14
*/