#include <stdio.h>

long factorial(int n)
{
    if(n<2)
        return 1;
    return n * factorial(n-1);
}

int main()
{
    int n, i;
    double sum=0.0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
        sum += 1.0 / factorial(i);
    printf("1/1! + 1/2! + . . . . + 1/%d! = %lf\n", n, sum);
    return 0;
}