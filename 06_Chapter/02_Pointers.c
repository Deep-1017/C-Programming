#include <stdio.h>

int main()
{
    int i = 20;
    int *j; // Declare an int-pointer 'j'
    j = &i; // 'j' pointer stores an address of variable 'i'

    printf("add i= %u\n", &i);          // Address of i
    printf("add i= %u\n", j);           // Address of i
    printf("add j= %u\n", &j);          // Address of j
    printf("value i= %d\n", i);         // Value of i
    printf("value i= %d\n", *(&i));     // Value of i
    printf("value i= %d\n", *j);        // Value of i

    return 0;
}