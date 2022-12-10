#include <stdio.h>

int main()
{
    int var1, var2, result;
    printf("Enter the first value: ");
    scanf("%d", &var1);
    printf("Enter the second value: ");
    scanf("%d", &var2);
    // addition
    result = var1 + var2;
    printf("Addition: %d\n", result);
    // subtraction
    result = var1 - var2;
    printf("Subtraction: %d\n", result);
    // division
    result = var1 / var2;
    printf("Division: %d\n", result);
    // multiplication
    result = var1 * var2;
    printf("Multiplication: %d\n", result);
    // remainder
    result = var1 % var2;
    printf("Remainder: %d\n", result);
    return 0;
}