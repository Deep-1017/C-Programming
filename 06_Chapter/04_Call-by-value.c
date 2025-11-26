#include<stdio.h>

int addition(int, int);

int addition(int a, int b) {
    return a + b;
}

int main() {

    // Call by value
    int res;
    res = addition(10, 20);
    printf("%d\n", res);
    
    return 0;
}