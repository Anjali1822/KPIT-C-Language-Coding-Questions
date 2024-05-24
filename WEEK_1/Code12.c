/*Write a program to check whether a triangle is valid or not, if three 
angles of the triangle are entered through the keyboard. A triangle 
is valid if the sum of all the three angles is equal to 180 degrees. */
#include <stdio.h>

int main() {
    int angle1, angle2, angle3;
    printf("Enter the first angle of the triangle: ");
    scanf("%d", &angle1);

    printf("Enter the second angle of the triangle: ");
    scanf("%d", &angle2);

    printf("Enter the third angle of the triangle: ");
    scanf("%d", &angle3);
 
    int sum = angle1 + angle2 + angle3;
   
    if (sum == 180) {
        printf("The triangle is valid.\n");
    } else {
        printf("The triangle is not valid.\n");
    }

    return 0;
}
/*OUTPUT:
     Enter the first angle of the triangle: 60
    Enter the second angle of the triangle: 60
    Enter the third angle of the triangle: 60
    The triangle is valid.
*/