#include<stdio.h>

int main() {
    int a = 97;

    if (a % 97 == 0)
    {
       printf("%d is divisible by 97.", a);
    }
    else {
        printf("%d is not divisible by 97.", a);
    }
    

    return 0;
}