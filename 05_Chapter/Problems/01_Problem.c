// Write a program using recursion to calculate nth element of Fibonacci series. 

// 0 1 1 2 3 5 8 13 21 39 60 ...

// Fib(n) = Fib(n-1) + Fib(n-2) 

#include<stdio.h>

int fib(int);

int fib(int n) {
    if(n == 0) {
        return 0;
    }
    if(n == 1) {
        return 1;
    }
    return fib(n-1) + fib(n-2);
} 

int main() {
    int res;
    res = fib(3);
    printf("%d\n", res);

    return 0;
}