#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if(num % 55 == 0)
        printf("Ther number %d is divisible by 5 and 11\n", num);
    else if(num % 5 == 0)
        printf("ther number %d is only divisible by 5\n", num);
    else if(num % 11 == 0)
        printf("The number %d is only divisible 11\n", num);
    else
        printf("The number %d is not divisible by both 5 and 11\n", num);
    return 0;
}