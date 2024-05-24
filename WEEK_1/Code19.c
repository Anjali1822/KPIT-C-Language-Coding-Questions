/*If the lengths of three sides of a triangle are entered through the keyboard, write a program to check whether the triangle is an isosceles, an equilateral, a scalene or a right-angled triangle.*/
#include <stdio.h>

int main() {
    double s1, s2, s3;

    printf("Enter the lengths of the three sides of the triangle: ");
    scanf("%lf %lf %lf", &s1, &s2, &s3);

    // Check if the triangle is equilateral
    if (s1 == s2 && s2 == s3) {
        printf("The triangle is equilateral triangle.\n");
    }
    // Check if the triangle is isosceles
    else if (s1 == s2 || s1 == s3 || s2 == s3) {
        printf("The triangle is an isosceles triangle.\n");
    }
    // Check if the triangle is a scalene triangle
    else if (s1 != s2 && s1 != s3 && s2 != s3) {
        printf("The triangle is a scalene triangle.\n");
    }

    // Check if the triangle is a right-angled triangle
    if (s1 * s1 == s2 * s2 + s3 * s3 ||s2 * s2 == s1 * s1 + s3 * s3 ||s3 * s3 == s1 * s1 + s2 * s2) {
        printf("The triangle is also a right-angled triangle.\n");
    }

    return 0;
}
/*OUTPUT:
Enter the lengths of the three sides of the triangle: 3 4 5
The triangle is a scalene triangle.
The triangle is also a right-angled triangle.
*/