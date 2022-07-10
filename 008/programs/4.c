#include <stdio.h>

int main()
{
    int i;
    int a[] = {1, 2, 3};
    int *ptr[3]; // array of integer pointers
    int (*ptr2arr)[3]; // pointer to array
    ptr2arr = &a;
    for(i=0; i<3; i++)
        ptr[i] = &a[i];
    

    printf("The elements accessed using array if pointers: \n");
    for(i=0; i<3; i++)
        printf("%d\n", *(ptr[i]));

    printf("The elements accessed using pointer to array: \n");
    for(i=0; i<3; i++)
        printf("%d\n", (*ptr2arr)[i] );
    return 0;
}