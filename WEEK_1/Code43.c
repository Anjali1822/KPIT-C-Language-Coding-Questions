/*Define a function to compute the distance between two points and 
use it to develop another function that will compute the area of the 
triangle whose vertices are A(x1, y1), B(x2, y2), and C(x3, y3). Use 
these functions to develop a function which returns a value 1 if the 
point (x, y) lines inside the triangle ABC, otherwise returns a value 
0. Would you get any advantage if you develop these functions to 
work on call be reference principle? */
#include <stdio.h>
#include <math.h>

// Function to compute the distance between two points
void distance(double x1, double y1, double x2, double y2, double *result) {
    *result = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

// Function to compute the area of a triangle given its three vertices
void triangleArea(double x1, double y1, double x2, double y2, double x3, double y3, double *result) {
    double a, b, c, s;
    distance(x1, y1, x2, y2, &a);
    distance(x2, y2, x3, y3, &b);
    distance(x3, y3, x1, y1, &c);
    s = (a + b + c) / 2; 
    *result = sqrt(s * (s - a) * (s - b) * (s - c));
}

// Function to determine if a point lies inside a triangle
int isInsideTriangle(double x1, double y1, double x2, double y2, double x3, double y3, double x, double y) {
    double totalArea, area1, area2, area3;
    triangleArea(x1, y1, x2, y2, x3, y3, &totalArea);
    triangleArea(x, y, x2, y2, x3, y3, &area1);
    triangleArea(x1, y1, x, y, x3, y3, &area2);
    triangleArea(x1, y1, x2, y2, x, y, &area3);
    return totalArea == area1 + area2 + area3;
}

int main() {
    double x1 = 0, y1 = 0;
    double x2 = 4, y2 = 0;
    double x3 = 2, y3 = 3;
    double x = 2, y = 1;

    int result = isInsideTriangle(x1, y1, x2, y2, x3, y3, x, y);

    if (result == 1)
        printf("The point (%.2f, %.2f) lies inside the triangle ABC.\n", x, y);
    else
        printf("The point (%.2f, %.2f) does not lie inside the triangle ABC.\n", x, y);

    return 0;
}
/*OUTPUT:
The point (2.00, 1.00) does not lie inside the triangle ABC.*/