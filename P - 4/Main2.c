#include <stdio.h>
#include <stdlib.h>

int main2()
{
    int num;
    scanf("%d" , &num);
    if (num % 10 == 5 || num % 10 == 0)
        printf("%d is divisible by 5\n" , num);
    else
        printf("%d is not divisible by 5\n" , num);
    return 0;
}

