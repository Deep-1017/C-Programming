// n! = n * (n-1)!

#include <stdio.h>

int fact(int);

int fact(int n)
{
    int res;

    if ((n == 0) || (n == 1))
    {
        return 1;
    }
    else
    {
        res = n * fact(n - 1);
        return res;
    }
}

int main()
{
    int fact_val = fact(5);
    printf("%d\n", fact_val);
    return 0;
}