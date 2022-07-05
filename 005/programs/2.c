#include <stdio.h>

int main()
{
    int num, i;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("\nMULTIPLICATION TABLE OF %d\n", num);
    for(i=1; i<=10; i++)
    {
        printf("%3d * %-2d =  %d\n", num, i, num*i);
    }
    return 0;
}