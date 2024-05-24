/*A five-digit number is entered through the keyboard. Write a 
program to obtain the reversed number and to determine whether 
the original and reversed numbers are equal or not. */
#include<stdio.h>
#include<math.h>

int main(){
    int digit,ans=0;
    printf("\nEnter the Number: ");
    scanf("%d",&digit);

    printf("\nEnter number is :%d ",digit);
    int temp=digit;
    
    while(temp>0){
        int d=temp%10;
        ans=ans*10+d;
        temp=temp/10;
    }
    printf("\nReversed Number is %d",ans);
    if(digit==ans){
        printf("\nReversed and original number are same");
    }
    else{
        printf("\nNumbers are not match");
    }

    return 0;
}
/*OUTPUT:
Enter the Number: 12345

Enter number is :12345
Reversed Number is 54321
Numbers are not match
*/