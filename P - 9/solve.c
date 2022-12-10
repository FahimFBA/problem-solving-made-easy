// Program to convert foot to meter

#include <stdio.h>

int main()
{
    double meter, foot;
    printf("Enter the value in foot: ");
    scanf("%lf", &foot);
    meter = foot * 0.3048;
    printf("\nThe value in meter is: %.2lf\n", meter);
}