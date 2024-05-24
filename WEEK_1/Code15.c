/*Given three points (x1, y1), (x2, y2) and (x3, y3), write a program to 
check if the three points fall on one straight line. */
#include <stdio.h>

int main() {
    double x1, y1, x2, y2, x3, y3;
    double slope1, slope2;

    printf("Enter the coordinates of point 1 (x1 y1): ");
    scanf("%lf %lf", &x1, &y1);

    printf("Enter the coordinates of point 2 (x2 y2): ");
    scanf("%lf %lf", &x2, &y2);

    printf("Enter the coordinates of point 3 (x3 y3): ");
    scanf("%lf %lf", &x3, &y3);

    slope1 = (y2 - y1) / (x2 - x1); 
    slope2 = (y3 - y2) / (x3 - x2); 

    if (slope1 == slope2) {
        printf("The three points (%.2f, %.2f), (%.2f, %.2f), and (%.2f, %.2f) are collinear.\n",
               x1, y1, x2, y2, x3, y3);
    } else {
        printf("The three points are not collinear.\n");
    }

    return 0;
}
/*
Enter the coordinates of point 1 (x1 y1): 1 1
Enter the coordinates of point 2 (x2 y2): 2 2
Enter the coordinates of point 3 (x3 y3): 3 3
The three points (1.00, 1.00), (2.00, 2.00), and (3.00, 3.00) are collinear.
*/