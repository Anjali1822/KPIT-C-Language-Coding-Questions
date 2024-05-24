/*Given a point (x, y), write a program to find out if it lies on X-axis, Y
axis or origin.*/
#include <stdio.h>

int main() {
    double x, y;

    
    printf("Enter the coordinates of the point (x y): ");
    scanf("%lf %lf", &x, &y);

   
    if (x == 0 && y == 0) {
        printf("The point (%.2f, %.2f) is at the origin.\n", x, y);
    } else if (x == 0) {
        printf("The point (%.2f, %.2f) lies on the Y-axis.\n", x, y);
    } else if (y == 0) {
        printf("The point (%.2f, %.2f) lies on the X-axis.\n", x, y);
    } else {
        printf("The point (%.2f, %.2f) does not lie on the X-axis, Y-axis, or at the origin.\n", x, y);
    }

    return 0;
}
/*OUTPUT:
Enter the coordinates of the point (x y): 0 34
The point (0.00, 34.00) lies on the Y-axis.
*/