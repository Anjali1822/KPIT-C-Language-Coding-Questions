/*Write a program to print the multiplication table of the number 
entered by the user. The table should get displayed in the following 
form: 
29 * 1 = 29 
29 * 2 = 58*/
#include <stdio.h>

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Multiplication table of %d:\n", number);
    for (int i = 1; i <= 10; ++i) {
        printf("%d * %d = %d\n", number, i, number * i);
    }

    return 0;
}
/*OUTPUT:
Enter a number: 20
Multiplication table of 20:
20 * 1 = 20
20 * 2 = 40
20 * 3 = 60
20 * 4 = 80
20 * 5 = 100
20 * 6 = 120
20 * 7 = 140
20 * 8 = 160
20 * 9 = 180
20 * 10 = 200
*/