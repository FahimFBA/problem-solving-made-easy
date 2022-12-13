// How to find the size of data types

#include<stdio.h>

int main()
{
    int a;
    double b;
    float c;
    char d;
    short e;
    long f;

    printf("The size for int is %ld\n" , sizeof(a));
    printf("The size for double is %ld\n" , sizeof(b));
    printf("The size for float is %ld\n" , sizeof(c));
    printf("The size for char is %ld\n" , sizeof(d));
    printf("The size for short is %ld\n" , sizeof(e));
    printf("The size for long is %ld\n" , sizeof(f));
}