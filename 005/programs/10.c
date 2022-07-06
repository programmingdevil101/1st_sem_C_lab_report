#include <stdio.h>

int main()
{
    int n, mod, rev=0, count=0, copy;
    printf("Enter a number: ");
    scanf("%d", &n);
    copy = n;
    while(copy != 0)
    {
        count++;
        copy /= 10;
    }
    while(n != 0)
    {
        rev *= 10;
        mod = n % 10;
        rev += mod;
        n /= 10;
    }
    printf("Number in reverse: %0*d\n", count, rev);
    return 0;
}