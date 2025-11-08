// Write a program to print first ‘n’ natural even number using do-while loop. 

#include<stdio.h>

int main() {
    int n;
    int i = 1;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    do {
        if(i % 2 == 0) {
            printf("%d\n", i);
        }
        i++;
    } while(i <= n);

    return 0;
}