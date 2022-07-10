#include <stdio.h>

int main()
{
    int n, i, array[100];
    printf("Enter the numbers of integers to be stored: ");
    scanf("%d", &n);
    printf("Enter the integers: \n");
    // write into array
    for(i=0; i<n; i++)
        scanf("%d", array+i);

    printf("The elements are: \n");
    for(i=0; i<n; i++)
        printf("%d\n", *(array + i));
    return 0;
}