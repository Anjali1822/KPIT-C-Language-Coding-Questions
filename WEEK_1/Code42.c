/*Define a function that receives weight of a commodity in Kilograms 
and returns the equivalent weight in Grams, Tons and Pounds. Call 
this function from main( ) and print the results in main( ). */
#include <stdio.h>

void convertWeight(double weightInKg, double *grams, double *tons, double *pounds) {
    *grams = weightInKg * 1000; // 1 kg = 1000 grams
    *tons = weightInKg / 1000;   // 1 kg = 0.001 tons
    *pounds = weightInKg * 2.20462; // 1 kg = 2.20462 pounds
}

int main() {
    double weightInKg = 5; 
    double grams, tons, pounds;
    convertWeight(weightInKg, &grams, &tons, &pounds);

    printf("Weight in grams: %.2f\n", grams);
    printf("Weight in tons: %.2f\n", tons);
    printf("Weight in pounds: %.2f\n", pounds);
    return 0;
}
/*OUTPUT:
Weight in grams: 5000.00
Weight in tons: 0.01
Weight in pounds: 11.02*/
