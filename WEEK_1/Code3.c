/*
Paper of size A0 has dimensions 1189 mm x 841 mm. Each 
subsequent size A(n) is defined as A(n-1) cut in half, parallel to its 
shorter sides. Thus, paper of size A1 would have dimensions 841 
mm x 594 mm. Write a program to calculate and print paper sizes 
A0, A1, A2, … A8. 
*/
#include<stdio.h>

int main()
{
    int height=1189,width=841;
    printf("\nPaper size of A0 to A8 is:");

    for(int i=0;i<=8;i++){
        printf("\n A%d: %d mm x %d mm",i,height,width);
        int temp=height;
        height=width;
        width=temp/2;
    }
    return 0;
}
/*
OUTPUT:
Paper size of A1 to A8 is:
 A0: 1189 mm x 841 mm
 A1: 841 mm x 594 mm
 A2: 594 mm x 420 mm
 A3: 420 mm x 297 mm
 A4: 297 mm x 210 mm
 A5: 210 mm x 148 mm
 A6: 148 mm x 105 mm
 A7: 105 mm x 74 mm
 A8: 74 mm x 52 mm
*/