#include <stdio.h>


int main()
{
    int n, i, first = 0, second = 1, temp;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("The first %d fibonacci numbers are: \n", n);
    for(i=0; i<n; i++)
    {
        printf("%d  ", first);
        temp = second;
        second += first;
        first = temp;
    }
    printf("\n");
    return 0;
}