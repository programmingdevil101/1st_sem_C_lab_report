#include <stdio.h>

#define TRUE 1
#define FALSE 0

int is_prime(int n)
{
    int i;
    if(n <= 1)
        return FALSE;
    else if(n == 2)
        return TRUE;
    else if(n % 2 == 0)
        return FALSE;
    for(i=3; i<= n/2; i += 2)
    {
        if(n % i == 0)
            return FALSE;
    }
    return TRUE;

}

int main()
{
    int n, prime;
    printf("Enter a number: ");
    scanf("%d", &n);
    prime = is_prime(n);
    if(prime)
        printf("The number %d is a prime.\n", n);
    else
        printf("The number %d is not a prime.\n", n);;
    return 0;
}