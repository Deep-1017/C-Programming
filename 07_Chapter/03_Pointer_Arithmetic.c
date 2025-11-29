// int -> 4 Bytes
// float -> 4 Bytes
// char -> 1 Byte

#include <stdio.h>

int main()
{
    int i = 32;

    int *j = &i;
    printf("%d\n", j); 
    
    j++;

    printf("%d\n", j); 

    return 0;
}