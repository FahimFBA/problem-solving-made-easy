#include<stdio.h>
int main()
{
    for (int i = 1; ; i++)
    {
        if (i == 51)
            break;
        printf("%d\n" , i);
    }
    printf("The infinite for loop ends here!\n");
}