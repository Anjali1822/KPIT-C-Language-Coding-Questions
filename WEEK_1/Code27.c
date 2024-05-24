/*Write a program to receive an integer and find its octal equivalent.  
(Hint: To obtain octal equivalent of an integer, divide it continuously 
by 8 till dividend doesn’t become zero, then write the remainders 
obtained in reverse direction.)*/
#include <stdio.h>

int main() {
    int num, octal = 0, remainder, place = 1;

    printf("Enter an integer: ");
    scanf("%d", &num);

   
    while (num != 0) {
        remainder = num % 8;  
        octal += remainder * place;  
        num /= 8; 
        place *= 10;
    }

    printf("Octal equivalent: %d\n", octal);
    return 0;
}
/*OUTPUT:
Enter an integer: 123
Octal equivalent: 173*/