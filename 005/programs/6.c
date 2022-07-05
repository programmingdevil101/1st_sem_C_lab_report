#include <stdio.h>
#include <math.h>


long factorial(int n)
{
    if(n<2)
        return 1;
    return n * factorial(n-1);
}

int main()
{
    int n, i, x;
    double sum=0.0;
    printf("Enter the value of x and n: ");
    scanf("%d%d", &x, &n);
    for(i=1; i<=n; i++)
        sum += pow(x, i) / factorial(i);
    printf("1/1! + 1/2! + . . . . + 1/%d! = %lf\n", n, sum);
    return 0;
}