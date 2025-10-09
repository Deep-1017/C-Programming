#include<stdio.h>

int main() {
    // Datatypes 
        // 1) int -> ... , -1, 0, 1, 2, 3, ....
            // Access Modifier : "%d"
        // 2) float -> 10.2, 2.3, 4.5, 6.2, ...
            // Access Modifier : "%f"
        // 3) char -> 'a', "a"
            // Access Modifier : "%c"

    int num1 = 10;
    float num2 = 20.6;
    char char1 = 'a';

    int age;


    // Output Function - printf()
    // printf("Hello World\n");
    // printf("I am learning C language\n");
    // printf("%d\n", num1);
    // printf("%f\n", num2);
    // printf("%c", char1);


    // Input Function - scanf()
    printf("What's your age: ");
    scanf("%d", &age);

    return 0;
}