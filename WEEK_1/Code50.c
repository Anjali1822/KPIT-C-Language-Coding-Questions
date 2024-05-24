/*Write a program using pointers to find the smallest number in an 
array of 25 integers. */
#include <stdio.h>

int findSmallest(int *arr, int size) {
    int min = *arr;

    for (int i = 1; i < size; i++) {
        if (*(arr + i) < min) {
            min = *(arr + i);
        }
    }
    return min;
}

int main() {
    int arr[25];

    printf("Enter 25 integers:\n");
    for (int i = 0; i < 25; i++) {
        scanf("%d", &arr[i]);
    }

    int smallest = findSmallest(arr, 25);

    printf("The smallest number in the array is: %d\n", smallest);

    return 0;
}
