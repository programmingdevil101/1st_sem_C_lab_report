#include <stdio.h>

void print_array(int* arr, int n)
{
    int i;
    for(i=0; i<n; i++)
        printf("%d  ", *(arr+i));
    printf("\n");
}

int main()
{
    int n, i, j, elem_index=0, elems[100], freq[100];
    int arr[100];
    int is_in = 1;
    printf("Enter the numbers of integers to be stored: ");
    scanf("%d", &n);
    printf("Enter the integers: \n");
    for(i=0; i<n; i++)
        scanf("%d", arr+i);
    elems[0] = arr[0];
    freq[0] = 1;
    elem_index += 1;
    for(i=1; i<n; i++)
    {
        for(j=0; j<elem_index; j++)
        {
            is_in = 0;
            if( (*(arr + i)) == (*(elems + j)) )
            {
                *(freq + j) += 1;
                is_in = 1;
                break;
            }
        }
        if(is_in == 0)
        {
            elems[elem_index] = *(arr + i);
            freq[elem_index] = 1;
            elem_index++;
        }

    }
    printf("Elements\tFrequency\n");
    for(i=0; i<elem_index; i++)
        printf("%-13d\t%d\n", elems[i], freq[i]);
    return 0;
}