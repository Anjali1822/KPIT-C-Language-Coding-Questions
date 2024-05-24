/*Any year is entered through the keyboard. Write a function to determine whether the year is a leap year or not.  */
#include <stdio.h>

int isLeapYear(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        return 1; 
    } else {
        return 0; // Not a leap year
    }
}

int main() {
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    if (isLeapYear(year)) {
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is not a leap year.\n", year);
    }

    return 0;
}
/*OUTPUT:
Enter a year: 2024
2024 is a leap year.
*/