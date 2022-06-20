#include <stdio.h>
int main()
{
    int num, next, is_prime = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    if(num <= 0)
    {
        printf("%d\n", num);
    }
    else if(num == 1)
    {
        printf("Neither prime nor composite\n");
    }
    else if(num == 2)
    {
        printf("Smallest and only prime number\n");
    }
    else
    {
        for(next = 2; next <= (num / 2); next += 1) {
            if(num % next == 0)
            {
                is_prime = 1;
                break;
            }
        }
        if(is_prime == 0)
        {
            printf("The number %d is prime\n", num);
        }
        else
        {
            if(num % 2 == 0)
                printf("The number is even\n");
            else
                printf("The number is odd\n");
        }
    }
    return 0;
}