#include<stdio.h>

int main() {
    int a = 10;
    int b = 20;
    int c = 30;

    // Logical Operator: AND (&&), OR (||), NOT (!)

    if((a < 5) || (b > 10)) {
        printf("TRUE");
    }
    else {
        printf("FALSE");
    }

    if(!(c > 20)) {
        printf("\nC is gretaer than 20");
    }
    
    return 0;
}