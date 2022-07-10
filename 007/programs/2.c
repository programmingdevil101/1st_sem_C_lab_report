#include <stdio.h>

int main()
{
    int n, i, array[100], sum=0;
    float avg;
    printf("Enter the numbers of integers to be stored: ");
    scanf("%d", &n);
    printf("Enter the integers: \n");
    for(i=0; i<n; i++)
    {
        scanf("%d", array+i);
        sum += *(array+i);
    }
    avg = (float)sum / n;
    printf("Sum = %d \nAverage = %.2f\n", sum, avg);
    return 0;
}