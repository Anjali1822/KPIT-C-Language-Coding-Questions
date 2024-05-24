/*  Write a program to receive values of latitude ( L1,L2) and longitude ( G1,G2) in degrees, of two places on the earth and output distance  (D) between them in nautical miles. The formula for distance in nautical miles is: 
    D=3963 cos^ -1 ( sin L1 * sin L2 * +cos L1 * cos L2 * cos(G2-G1))
*/
#include<stdio.h>
#include<math.h>
#define PI 3.14159265358979323846
double deg2rad(double val){
    double degree=val*(PI/180);
    return degree;
}
int main(){
    double l1,l2,g1,g2;
    double d;
    printf("\nEnter Values of latitude (L1,L2) : ");
    scanf("%lf%lf",&l1,&l2);
    printf("\nEnter Values of longitude (G1,G2) : ");
    scanf("%lf%lf",&g1,&g2);

    l1=deg2rad(l1);
    l2=deg2rad(l2);
    g1=deg2rad(g1);
    g2=deg2rad(g2);

    d=3963 * acos(sin(l1) *sin(l2)+cos(l1) *cos(l2)*cos(g2-g1));
    printf("\nDistance in nautical miles is : %.2f",d);
    return 0;
}
/*OUTPUT:
    Enter Values of latitude (L1,L2) : 34.05 40.71
    Enter Values of longitude (G1,G2) : -118.25 -74.01
    Distance in nautical miles is : 2448.38
*/