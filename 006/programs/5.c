#include <stdio.h>

void swap(int* a, int* b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a, b;
    printf("Enter the values of a and b: ");
    scanf("%d%d", &a, &b);
    printf("The value before swapping: a = %d \t b = %d\n", a, b);
    swap(&a, &b);
    printf("The value after swapping: a = %d \t b = %d\n", a, b);
    return 0;
}