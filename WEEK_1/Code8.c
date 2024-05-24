/*If value of an angle is input through the keyboard, write a program to print all its Trigonometric ratios.*/
#include<stdio.h>
#include<math.h>
#define PI 3.14159265358979323846

double deg2rad(double val){
    return val*(PI/180.0);
}
int main(){
    double angle,radian;
    double sine,cosine,tangent,cosec,sec,cot;
    printf("Enter the angle in degrees: ");
    scanf("%lf", &angle);

    radian = deg2rad(angle);

    sine = sin(radian);
    cosine = cos(radian);
    tangent = tan(radian);

    if (sine != 0) {
        cosec = 1.0 / sine;
    } else {
        printf("\nCosecant is undefined (sine is zero)");
        cosec= NAN; // NAN stands for Not A Number
    }

    if (cosine != 0) {
        sec = 1.0 / cosine;
    } else {
        printf("\nSecant is undefined (cosine is zero)");
        sec = NAN;
    }

    if (tangent != 0) {
        cot = 1.0 / tangent;
    } else {
        printf("\nCotangent is undefined (tangent is zero)");
        cot = NAN;
    }
    printf("\nTrigonometric ratios for the angle %.2f degrees are:", angle);
    printf("\nSine: %.4f", sine);
    printf("\nCosine: %.4f", cosine);
    printf("\nTangent: %.4f", tangent);
    if (!isnan(cosec)) 
    printf("\nCosecant: %.4f", cosec);
    if (!isnan(sec)) 
    printf("\nSecant: %.4f", sec);
    if (!isnan(cot)) 
    printf("\nCotangent: %.4f", cot);
    return 0;
}
/*OUTPUT: 
    Enter the angle in degrees: 30
    Trigonometric ratios for the angle 30.00 degrees are:
    Sine: 0.5000
    Cosine: 0.8660
    Tangent: 0.5774
    Cosecant: 2.0000
    Secant: 1.1547
    Cotangent: 1.7321
*/