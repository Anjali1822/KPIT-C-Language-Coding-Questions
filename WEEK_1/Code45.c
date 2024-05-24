/*Write a recursive function to obtain the sum of first 25 natural numbers. */
#include <stdio.h>

int sumOfFirstN(int n) {
    if (n == 0) {
        return 0;
    } 
    
    else {
        return n + sumOfFirstN(n - 1);
    }
}

int main() {
    int sum = sumOfFirstN(25);
    printf("Sum of the first 25 natural numbers: %d\n", sum);
    return 0;
}
/*OUTPUT:
Sum of the first 25 natural numbers: 325*/