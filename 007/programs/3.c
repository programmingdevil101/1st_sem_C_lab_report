#include <stdio.h>

// insertion sort
void sort(int* arr, int n)
{
    int i, j, key;
    for(i=1; i<n; i++)
    {
        key = *(arr + i);
        j = i - 1;

        while(j >= 0 && arr[j] < key)
        {
            *(arr + j + 1) = *(arr + j);
            j--;
        }
        *(arr + j + 1) = key;
    }
}


int main()
{
    int n, i, arr[100];
    printf("Enter the numbers of integers to be stored: ");
    scanf("%d", &n);
    printf("Enter the integers: \n");
    for(i=0; i<n; i++)
        scanf("%d", arr+i);

    printf("Unsorted array: ");
    for(i=0; i<n; i++)
        printf("%d  ", *(arr + i));
    printf("\n");

    sort(arr, n);

    printf("sorted array: ");
    for(i=0; i<n; i++)
        printf("%d  ", *(arr + i));
    printf("\n");

    return 0;
}