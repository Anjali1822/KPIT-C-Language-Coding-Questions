/*Given the coordinates (x, y) of center of a circle and its radius, write 
a program that will determine whether a point lies inside the circle, 
on the circle or outside the circle. (Hint: Use sqrt( ) and pow( ) 
functions) */
#include <stdio.h>
#include <math.h>

int main() {
    double x, y; 
    double x_c, y_c, r; 
    double distance;
   
    printf("Enter the coordinates of the center of the circle: ");
    scanf("%lf %lf", &x_c, &y_c);

    printf("Enter the radius of the circle: ");
    scanf("%lf", &r);

  
    printf("Enter the coordinates of the point (x y): ");
    scanf("%lf %lf", &x, &y);

    distance = sqrt(pow(x - x_c, 2) + pow(y - y_c, 2)); // Calculate the distance between the center of the circle and the point

    // Compare the distance with the radius to determine the position of the point
    if (distance < r) {
        printf("The point (%.2f, %.2f) lies inside the circle.\n", x, y);
    } else if (distance == r) {
        printf("The point (%.2f, %.2f) lies on the circle.\n", x, y);
    } else {
        printf("The point (%.2f, %.2f) lies outside the circle.\n", x, y);
    }
    return 0;
}
/*OUTPUT:
Enter the coordinates of the center of the circle: 0 0
Enter the radius of the circle: 5
Enter the coordinates of the point (x y): 3 4
The point (3.00, 4.00) lies on the circle.
*/