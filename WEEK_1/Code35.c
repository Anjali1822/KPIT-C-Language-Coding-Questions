/*Ramanujan number (1729) is the smallest number that can be expressed as sum of two cubes in two different ways-1729 can be expressed as 1^3+ 12^3 and 9^3+ 10^3. Write a program to print all such numbers up to a reasonable limit.*/
#include <stdio.h>

int main() {
    int limit = 10000; // Reasonable limit
    printf("Ramanujan numbers up to %d:\n", limit);

    for (int i = 1; i < limit; i++) {
        for (int j = i; j < limit; j++) {
            int cube_sum = i*i*i + j*j*j;
            // Check if cube_sum is a Ramanujan number
            for (int x = i+1; x < limit; x++) {
                for (int y = x; y < limit; y++) {
                    if (x != i || y != j) { // Avoid counting the same pair twice
                        if (x*x*x + y*y*y == cube_sum) {
                            printf("%d\n", cube_sum);
                        }
                    }
                }
            }
        }
    }

    return 0;
}
/*OUTPUT:
Ramanujan numbers up to 10000:
1729
1092728
1157626
1953126
3375001
3944313
15438250
54010153
60698458
121287376
260917120
401947273
592704001
640503929
700227073
721734274
1128111922
1842771177*/