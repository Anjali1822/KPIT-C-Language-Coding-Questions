/*Write a program to print 24 hours of day with suitable suffixes like AM, PM, Noon and Midnight.*/
#include <stdio.h>

int main() {
    printf("24 hours of the day with suitable suffixes:\n");

    for (int hour = 0; hour < 24; hour++) {
        if (hour == 0) {
            printf("12 Midnight\n");
        } else if (hour == 12) {
            printf("12 Noon\n");
        } else if (hour < 12) {
            printf("%d AM\n", hour);
        } else {
            printf("%d PM\n", hour - 12);
        }
    }

    return 0;
}
/*OUTPUT:
24 hours of the day with suitable suffixes:
12 Midnight
1 AM
2 AM
3 AM
4 AM
5 AM
6 AM
7 AM
8 AM
9 AM
10 AM
11 AM
12 Noon
1 PM
2 PM
3 PM
4 PM
5 PM
6 PM
7 PM
8 PM
9 PM
10 PM
11 PM*/