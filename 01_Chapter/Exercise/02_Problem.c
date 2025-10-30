// Celcius to Fahrenheit Conversion
// F = (9/5 * C) + 32

#include<stdio.h>

int main() {
    int cel = 50;
    float fhr;

    fhr = (9.0/5 * cel) + 32;

    printf("Value of Fahrenhit Temp: %f", fhr);

    return 0;
}