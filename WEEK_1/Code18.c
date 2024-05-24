/*According to Gregorian calendar, it was Monday on the date 
01/01/01. If any year is input through the keyboard write a program 
to find out what is the day on 1st January of this year. */
#include <stdio.h>

int isLeapYear(int year) {
    if ((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0))) {
        return 1;
    } else {
        return 0;
    }
}
const char* getdayofweek(int year) {
    const char* dayWeek[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    int baseYear = 1;
    int baseDay = 1;
    int totalDays = 0;

    for (int y = baseYear; y < year; y++) {
        totalDays += isLeapYear(y) ? 366 : 365;
    }

    int dayOfaWeek = (baseDay + totalDays) % 7;
    return dayWeek[dayOfaWeek];
}
int main() {
    int year;
    printf("Enter the year: ");
    scanf("%d", &year);
    printf("Day of the week on January 1st, %d is %s.\n", year, getdayofweek(year));
    return 0;
}
/*OUTPUT:
Enter the year: 2024
Day of the week on January 1st, 2024 is Monday.
*/