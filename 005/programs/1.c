#include <stdio.h>

int main()
{
    int sum = 0, num, i;
    float avg;
    printf("Enter 10 numbers: ");
    for(i=0; i<10; i++)
    {
        scanf("%d", &num);
        sum += num;
    }
    avg = sum / 10.0;
    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", avg);
    return 0;
}