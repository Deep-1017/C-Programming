#include<stdio.h>

int main() {
    int i = 10;

    // Pointer to Variable
    int *j;
    j = &i;

    // Pointer to Pointer
    int **k;
    k = &j;

    return 0;
}