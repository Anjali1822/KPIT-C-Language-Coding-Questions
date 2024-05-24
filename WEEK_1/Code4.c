/*
If a five-digit number is input through the keyboard, write a program to calculate the sum of its digits. (Hint: Use the modulus operator %)
*/
#include<stdio.h>

int main(){
    int num,sum=0;
    printf("\nEnter a numeber:");
    scanf("%d",&num);
    
    while(num>0){
    int digit=num%10;//Get last digit
    sum+=digit;
    num=num/10;//Remove last digit
    }
    printf("\nSum of Digit is : %d",sum);
    return 0;
}
/*
Enter a numeber:12345

Sum of Digit is : 15
*/