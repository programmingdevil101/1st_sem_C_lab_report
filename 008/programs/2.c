#include <stdio.h>

void calculate(int* a, int*b, int* sum, int* diff, int* prod, int *quot)
{
    *sum = *a + *b;
    *diff = *a - *b;
    *prod = *a * *b;
    *quot = *a / *b;
}

int main()
{
    int a, b, sum, diff, prod, quot;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    calculate(&a, &b, &sum, &diff, &prod, &quot);
    printf("Sum = %d \nDifference = %d \nProduct = %d\nQuotient = %d\n", sum, diff, prod, quot);
    return 0;
}