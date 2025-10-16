// Area of Rectangle = length * Width

#include <stdio.h>

int main()
{
    // float length = 10;
    // float width = 20;

    float length;
    float width;
    float area;

    printf("Enter a value of length: ");
    scanf("%f", &length);
    printf("Enter a value of width: ");
    scanf("%f", &width);

    area = length * width;
    printf("Area: %.2f", area);
    return 0;
}