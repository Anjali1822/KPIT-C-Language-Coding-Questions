/* Write a program to receive Cartesian co-ordinates (x, y) of a point and convert them into polar co-ordinates (r, φ).
   Hint: r = sqrt(x² + y²) and φ= tan-1(y/x)
*/
#include<stdio.h>
#include<math.h>
#define PI 3.14159 
int main(){
    int x,y;
    double r,phi;
    printf("\nEnter Coordinates x and y: ");
    scanf("%d%d",&x,&y);

    r=sqrt(x*x + y*y);
    phi=atan2(y,x);
    phi=phi*(180/PI);

    printf("\nPolar cordinated (r,φ) are: (%.2f ,%.2f degrees)",r,phi);

    return 0;
}
/*OUTPUT:
    Enter Coordinates x and y: 3 4
    Polar cordinated (r,╧å) are: (5.00 ,53.13 degrees)
*/