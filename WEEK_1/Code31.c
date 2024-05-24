/*When interest compounds q times per year at an annual rate of r% for n years, the principal p compounds to an amount a as per the following formula

a=p(1+r/q)^nq

Write a program to read 10 sets of p, r, n & q and calculate the corresponding as.*/
#include <stdio.h>
#include <math.h>

int main() {
    int sets = 10;
    double p, r, n, q, a;

    for (int i = 1; i <= sets; ++i) {
        
        printf("Enter values for Set %d (p, r, n, q): ", i);
        scanf("%lf %lf %lf %lf", &p, &r, &n, &q);

       
        a = p * pow(1 +(r/q), n * q);

        printf("Amount for Set %d: %.2f\n\n", i, a);
    }

    return 0;
}
