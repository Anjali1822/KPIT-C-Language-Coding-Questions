/*
    Temperature of a city in Fahrenheit degrees is input through the 
    keyboard. Write a program to convert this temperature into 
    Centigrade degrees. 
*/

#include<stdio.h>
// To convert Fahrenheit to Celsius,subtract 32 from the Fahrenheit temperature and then multiply the result by 5/9. 
int main(){
    float Cel,Fah;
    printf("\nEnter tempurature in Fahrenheit degree : ");
    scanf("%f",&Fah);

    Cel=(Fah-32)*5/9;
   
    printf("\nTemperature in Celcius is : %.2f",Cel);
    return 0;
}
/* OUTPUT: 
   Enter tempurature in Fahrenheit degree : 100
   Temperature in Celcius is : 37.78
*/