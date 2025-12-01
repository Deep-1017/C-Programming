#include <stdio.h>

int main()
{
    // char greet[] = {'H', 'e', 'l', 'l', 'o', '\0'};

    char name[] = "My name is Deep";

    // printf("%d\n", sizeof(name));

    for (int i = 0; i < sizeof(name); i++)
    {
        printf("%c\n", name[i]);
    }

    return 0;
}