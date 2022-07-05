#include <stdio.h>

int main()
{
    int low, high, i, count=0;
    printf("Enter a range: ");
    scanf("%d%d", &low, &high);
    for(i=low; i<=high; i++)
    {
        if(i % 2 == 0)
        {
            printf("%d\t", i);
            count++;
        }
    }
    printf("\nNo of even numbers between %d and %d: %d\n", low, high, count);
    return 0;
}