/* Given three variables x, y, z, write a function to circularly shift their 
values to right. In other words, if x = 5, y = 8, z = 10, after circular 
shift y = 5, z = 8, x =10. Call the function with variables a, b, c to 
circularly shift values. */
#include <stdio.h>

void circularShift(int *a, int *b, int *c) {
    int temp = *c;
    *c = *b;
    *b = *a;
    *a = temp;
}

int main() {
    int x = 5, y = 8, z = 10;

    printf("Before circular shift: x = %d, y = %d, z = %d\n", x, y, z);

    circularShift(&x, &y, &z);

    printf("After circular shift: x = %d, y = %d, z = %d\n", x, y, z);

    return 0;
}
/*OUTPUT:
Before circular shift: x = 5, y = 8, z = 10
After circular shift: x = 10, y = 5, z = 8*/