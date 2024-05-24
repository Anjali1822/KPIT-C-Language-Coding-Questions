/*A positive integer is entered through the keyboard. Write a function to obtain the prime factors of this number. For example, prime factors of 24 are 2, 2, 2 and 3, whereas prime factors of 35 are 5 and 7. 
*/
#include <stdio.h>

void primeFactors(int n) {
   
    while (n % 2 == 0) {
        printf("%d ", 2);
        n = n / 2;
    }

    for (int i = 3; i * i <= n; i = i + 2) {
        while (n % i == 0) {
            printf("%d ", i);
            n = n / i;
        }
    }

    if (n > 2) {
        printf("%d ", n);
    }
}

int main() {
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    if (num <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    printf("Prime factors of %d are: ", num);
    primeFactors(num);

    return 0;
}
/*OUTPUT:
Enter a positive integer: 24
Prime factors of 24 are: 2 2 2 3 */