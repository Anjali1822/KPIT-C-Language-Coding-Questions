/*Write a program to find the range of a set of numbers entered 
through the keyboard. Range is the difference between the smallest 
and biggest number in the list. */
#include <stdio.h>

int main() {
    int count, number;
    int smallest, largest;

 
    printf("Enter the count of numbers: ");
    scanf("%d", &count);

   
    printf("Enter %d numbers:\n", count);
    scanf("%d", &number);
    smallest = largest = number;

    
    for (int i = 1; i < count; ++i) {
        scanf("%d", &number);

       
        if (number < smallest) {
            smallest = number;
        }
        if (number > largest) {
            largest = number;
        }
    }

  
    int range = largest - smallest;
    printf("Range of the numbers: %d\n", range);

    return 0;
}
/*OUTPUT:
Enter the count of numbers: 5
Enter 5 numbers:
1
2
3
4
5
Range of the numbers: 4*/
