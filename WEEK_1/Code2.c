/*
    The length and breadth of a rectangle and radius of a circle are 
    input through the keyboard. Write a program to calculate the area 
    and perimeter of the rectangle, and the area and circumference of 
    the circle. 
*/
#include<stdio.h>
#define PI 3.14159

int main(){
    float areaR,areaC,Peri,Circumference,length,breadth,radius;
    printf("\nEnter Length and Breadth of Rectangle :");
    scanf("%f%f",&length,&breadth);
    printf("\nEnter Radius of Circle: ");
    scanf("%f",&radius);

    areaR=length*breadth;
    areaC=PI*radius*radius;
    Circumference=2*PI*radius;
    Peri=2*(length+breadth);

    printf("\n Area of Rectangle : %.2f",areaR);
    printf("\nPerimeter of Rectangle : %.2f",Peri);
    printf("\nArea of Circle :  %.2f",areaC);
    printf("\nCircummference of Circle : %.2f",Circumference);
    return 0;
}
