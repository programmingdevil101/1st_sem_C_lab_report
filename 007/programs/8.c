#include <stdio.h>


void fill_matrix(int* mat, int m, int n) {
    for(int j=0; j<m; j++) {
        int i = 0;
        printf("Enter %dth row: \n>", j+1);
        while(i<n && scanf("%d", mat + j*n + i)) {
            i++;
        }
    }
}

void print_matrix(int* mat, int m, int n) {
    for(int j=0; j<m; j++) {
        for(int i=0; i<n; i++) {
            printf("%d ", *(mat + j*n + i));
        }
        printf("\n");
    }
}


// fills array with initial value provided
void init_array(int* arr, int size, int val)
{
    int i;
    for(i=0; i<size; i++)
        *(arr+i) = val;
}

int main()
{
    int arr[20][20];
    int rowsum[20], colsum[20];
    int i, j, m, n;
    printf("Enter the order of matrix: ");
    scanf("%d%d", &m, &n);
    fill_matrix(arr[0], m, n);
    init_array(rowsum, 20, 0);
    init_array(colsum, 20, 0);
    for(i=0; i<m; i++)
        printf("%5d\n", rowsum[i]);
    for(j=0; j<m; j++)
    {
        for(i=0; i<n; i++)
        {
            printf("row: %d\tcol: %d\telem: %d\t sum: %d\n", j, i, arr[j][i], rowsum[j]);
            getchar();
            rowsum[j] += arr[j][i];
            colsum[i] += arr[j][i];
        }
    }
    print_matrix(arr[0], m, n);
    for(i=0; i<m; i++)
        printf("%5d\n", rowsum[i]);

    // for(i=0; i<(n*5 + 7); i++)
    //     printf(" ");
    // printf("sum\n");
    // for(j=0; j<m; j++)
    // {
    //     printf("     ");
    //     for(i=0; i<n; i++)
    //         printf("%5d", arr[j][i]);
    //     printf("%5d\n", rowsum[j]);
    // }
    // printf("sum  ");
    // for(i=0; i<n; i++)
    //     printf("%5d", colsum[i]);
    // printf("\n");
    return 0;
}