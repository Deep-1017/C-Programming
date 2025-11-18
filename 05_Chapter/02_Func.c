#include<stdio.h>

// Func Prototype
int addition(int a, int b);

// Func Definition - a,b are parameters
int addition(int a, int b) {
    return a + b;
}

int main() {
    int result, res1;

    // int num1 = 1, num2 = 4, mul;
    // mul = num1 * num2;
    // printf("%d\n", mul);

    // int num3 = 10, num4 = 4, mul2;
    // mul2 = num3 * num4;
    // printf("%d\n", mul2);

    // Function Call - 10, 20 are arguments
    result = addition(10, 20);
    printf("%d\n", result);

    res1 = addition(14, 23);
    printf("%d\n", res1);

    return 0;
}