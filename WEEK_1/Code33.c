/*Write a program to generate all Pythagorean Triplets with side length less than or equal to 30.*/
#include <stdio.h>

int main() {
    printf("Pythagorean Triplets with side length less than or equal to 30:\n");

    for (int a = 1; a <= 30; a++) {
        for (int b = a; b <= 30; b++) {
            for (int c = b; c <= 30; c++) {
               
                if (a * a + b * b == c * c) {
                    printf("(%d, %d, %d)\n", a, b, c);
                }
            }
        }
    }

    return 0;
}
/*OUTPUT:
Pythagorean Triplets with side length less than or equal to 30:
(3, 4, 5)
(5, 12, 13)
(6, 8, 10)
(7, 24, 25)
(8, 15, 17)
(9, 12, 15)
(10, 24, 26)
(12, 16, 20)
(15, 20, 25)
(18, 24, 30)
(20, 21, 29)*/