#include <stdio.h>

int main()
{
    int n, i;
    double sum = 0.0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
        sum += 1.0/i;
    printf("Reciprocal sum = %.3lf\n", sum);
    return 0;
}