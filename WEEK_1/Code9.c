/*Two numbers are input through the keyboard into two locations C and D. Write a program to interchange the contents of C and D.*/
#include<stdio.h>
#include<math.h>

int main(){
    int c,d;

    printf("\nEnter values of C and D : ");
    scanf("%d%d",&c,&d);
    printf("\nValues Before Swapping : %d %d",c,d);

    int temp=c;
    c=d;
    d=temp;
   
    printf("\nValues After Swapping %d %d",c,d);
    return 0;
}
/*OUTPUT:
Enter values of C and D : 1 2

Values Before Swapping : 1 2
Values After Swapping 2 1
*/