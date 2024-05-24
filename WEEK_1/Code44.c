/*A positive integer is entered through the keyboard, write a function 
to find the binary equivalent of this number:  
(1) Without using recursion 
(2) Using recursion */
/*WITHOUT USING RECCURSSION 
#include <stdio.h>

void decimalToBinary(int n) {
    int binary[32], i = 0;

    while (n > 0) {
        binary[i++] = n % 2;
        n /= 2;
    }

    printf("Binary equivalent: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
}

int main() {
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    decimalToBinary(num);
    return 0;
}
*/
#include <stdio.h>

void decimalToBinary(int n) {
    if (n > 0) {
        decimalToBinary(n / 2);
        printf("%d", n % 2);
    }
}

int main() {
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    printf("Binary equivalent: ");
    decimalToBinary(num);
    return 0;
}
/*OUTPUT:
Enter a positive integer: 25
Binary equivalent: 11001*/