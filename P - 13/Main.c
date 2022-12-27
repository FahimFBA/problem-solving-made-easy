#include<stdio.h>
#define pi 3.1416
int main()
{
    double r;
    printf("Enter the value for the radius: ");
    scanf("%lf" , &r);
    printf("Area of the circle: %.2lf\n" , (pi * r * r));
}