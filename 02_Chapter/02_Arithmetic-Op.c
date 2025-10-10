#include<stdio.h>

int main() {
    int a = 8;
    float b = 20.5;
    int c = 30;

    // Arithmetic Op:  + , -, *, /, %
    float sum = a + b;
    int sub = c - a;
    int mul = a * c;
    int div = c / a;
    int mod = c % a;
    
    printf("%d\n", mod);
    printf("%f\n", sum);
    printf("%d\n", sub);
    printf("%d\n", mul);
    printf("%d\n", div);
    return 0;
} 

// 30.000000 30.500000 31.000000 30 