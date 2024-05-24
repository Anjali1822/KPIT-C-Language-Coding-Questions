/*If an array arr contains n elements, then write a program to check if 
arr[ 0 ] = arr[ n - 1 ], arr[ 1 ] = arr[ n - 2 ] and so on.*/
#include <stdio.h>
#include <stdbool.h>

bool isSymmetric(int arr[], int n) {
    // Check if the array is empty or has only one element
    if (n <= 1) {
        return true;
    }

    // Check if each corresponding pair of elements match
    for (int i = 0; i < n / 2; i++) {
        if (arr[i] != arr[n - i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    if (isSymmetric(arr, n)) {
        printf("The array is symmetric.\n");
    } else {
        printf("The array is not symmetric.\n");
    }

    return 0;
}
/*OUTPUT:
Enter the number of elements in the array: 4
Enter 4 elements:
10 9 9 10
The array is symmetric.*/