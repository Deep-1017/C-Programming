#include<stdio.h>

void swap(int *, int *);

void swap(int *x, int *y) {
    int temp;

    temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int a = 10;
    int b = 20;

    printf("Value of a before swap: %d\n", a);
    printf("Value of b before swap: %d\n", b);
    
    swap(&a, &b);
    
    printf("Value of a after swap: %d\n", a);
    printf("Value of b after swap: %d\n", b);

    return 0;
}