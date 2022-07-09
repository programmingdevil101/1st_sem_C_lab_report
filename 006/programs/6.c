#include <stdio.h>

void calculate(float* a, float*b, float* sum, float* diff, float* prod)
{
    *sum = *a + *b;
    *diff = *a - *b;
    *prod = *a * *b;
}

int main()
{
    float a, b, sum, diff, prod;
    printf("Enter two floating point numbers: ");
    scanf("%f%f", &a, &b);
    calculate(&a, &b, &sum, &diff, &prod);
    printf("Sum = %.2f \nDifference = %.2f \nProduct = %.2f\n", sum, diff, prod);
    return 0;
}