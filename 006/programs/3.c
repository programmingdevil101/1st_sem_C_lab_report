#include <stdio.h>

long factorial(int n)
{
    if(n<2)
        return 1;
    return n * factorial(n-1);
}


int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Factorial of %d = %ld\n", n, factorial(n));
    return 0;
}