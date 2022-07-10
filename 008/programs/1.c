#include <stdio.h>

int main()
{
    int a, b, sum, diff;
    int *p_a, *p_b, *p_sum, *p_diff;
    p_a = &a;
    p_b = &b;
    p_sum = &sum;
    p_diff = &diff;
    printf("Enter two numbers: ");
    scanf("%d%d", p_a, p_b);
    *p_sum = *p_a + *p_b;
    *p_diff = *p_a - *p_b;
    printf("Sum = %d\nDifference = %d\n", *p_sum, *p_diff);
    return 0;
}