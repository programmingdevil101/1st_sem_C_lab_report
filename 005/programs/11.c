#include <stdio.h>

int main()
{
    int n, mod, rev=0, copy;
    printf("Enter a number: ");
    scanf("%d", &n);
    copy = n;
    while(copy != 0)
    {
        rev *= 10;
        mod = copy % 10;
        rev += mod;
        copy /= 10;
    }
    if(n == rev)
        printf("%d is a palindrome.\n", n);
    else
        printf("%d is not a palindrome.\n", n);
    return 0;
}