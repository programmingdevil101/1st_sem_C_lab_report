#include <stdio.h>

void minmax(int* arr, int n, int* min, int* max)
{
    int i, min_l = 1000000, max_l = -1000000;
    for(i=0; i<n; i++)
    {
        max_l = ( *(arr+i) > max_l )? *(arr + i) : max_l;
        min_l = ( *(arr+i) < min_l )? *(arr + i) : min_l;
    }
    *max = max_l;
    *min = min_l;
}

int main()
{
    int max, min, n, arr[100], i;
    printf("Enter the numbers of integers to be stored: ");
    scanf("%d", &n);
    printf("Enter the integers: \n");
    for(i=0; i<n; i++)
        scanf("%d", arr+i);

    minmax(arr, n, &min, &max);
    printf("Max = %d\nMin = %d\n", max, min);
    return 0;
}