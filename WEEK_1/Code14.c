/*Given the length and breadth of a rectangle, write a program to find 
whether the area of the rectangle is greater than its perimeter. For 
example, the area of the rectangle with length = 5 and breadth = 4 
is greater than its perimeter. */
#include <stdio.h>

int main() {
    double length, breadth, area, perimeter;

    printf("Enter the length of the rectangle: ");
    scanf("%lf", &length);

    printf("Enter the breadth of the rectangle: ");
    scanf("%lf", &breadth);

    area = length * breadth;
    perimeter = 2 * (length + breadth);

    printf("\nArea is : %.2lf",area);
    printf("\nPerimeter is : %.2lf",perimeter);
    if (area > perimeter) {
        printf("\nThe area of the rectangle is greater than its perimeter.");
    } else {
        printf("\nThe area of the rectangle is not greater than its perimeter.");
    }

    return 0;
}
/*OUTPUT:
Enter the length of the rectangle: 30
Enter the breadth of the rectangle: 30

Area is : 900.00
Perimeter is : 120.00
The area of the rectangle is greater than its perimeter.
*/