#include<stdio.h>

int main()
{
    char ch;
    printf("Type a character: ");
    scanf("%c" , &ch);
    printf("The ASCII value for %c is %d\n" , ch, ch);
}