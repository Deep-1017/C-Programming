// Write a function to calculate force of attraction on a body of mass ‘m’ exerted by earth. Consider g = 9.8m/s2. 

// F = m * g

#include<stdio.h>

float forceOfAttraction(float);

float forceOfAttraction(float m) {
    float F;
    float g = 9.8;

    F = m * g;
    return F;
}

int main() {
    float res;

    res = forceOfAttraction(20);

    printf("%.2f", res);

    return 0;
}