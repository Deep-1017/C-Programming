#include<stdio.h>

int main() {
    
    // int arr[5];
    // float arr1[10];
    // char arr2[2];   


    int marks[5];

    // scanf("Enter first marks: %d", &marks[0]);
    // scanf("Enter second marks: %d", &marks[1]);
    // scanf("Enter third marks: %d", &marks[2]);
    // scanf("Enter fourth marks: %d", &marks[3]);
    // scanf("Enter fifth marks: %d", &marks[4]);

    marks[0] = 10;
    marks[1] = 10;
    marks[2] = 10;
    marks[3] = 10;
    marks[4] = 10;


    printf("Marks of first subject is: %d\n", marks[0]);
    printf("Marks of second subject is: %d\n", marks[1]);
    printf("Marks of third subject is: %d\n", marks[2]);
    printf("Marks of fourth subject is: %d\n", marks[3]);
    printf("Marks of fifth subject is: %d\n", marks[4]);

    return 0;
}