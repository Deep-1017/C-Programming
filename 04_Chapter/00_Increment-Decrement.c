// Increment Decrement Operator
// ++, --

#include<stdio.h>

int main() {
    int a = 10;
    int b;
    // b = a++;         b = 10, a = 11      
    // b = ++a;         b = 11, a = 11
    // b = a--;         b = 10, a = 9
    b = --a;         // b = 9, a = 9

    printf("%d\n", b);
    printf("%d\n", a);
    return 0;
}