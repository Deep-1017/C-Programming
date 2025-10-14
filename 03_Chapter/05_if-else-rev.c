#include<stdio.h>

int main() {
    int a = 5;
    int b = 10;

    // and (&&), or (||), not(!)

    if((a > 5) || (b > 5)) {
        printf("Value of a is greater than 5");
    }
    else if(a == 1) {
        printf("Value of a is equal to 1");
    }
    else if(a >= 5) {
        printf("Value of a is greater than or equal to 5");
    }
    else {
        printf("Value of a is less than 5");
    }
    return 0;
}