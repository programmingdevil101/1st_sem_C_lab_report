#include <stdio.h>


void fill_matrix(int mat[][20], int m, int n) {
    for(int j=0; j<m; j++) {
        int i = 0;
        printf("Enter %dth row: \n>", j+1);
        while(i<n && scanf("%d", &mat[j][i])) {
            i++;
        }
    }
}

void print_matrix(int mat[], int m, int n) {
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
    fill_matrix(arr, m, n);
    init_array(rowsum, 20, 0);
    init_array(colsum, 20, 0);
    for(j=0; j<m; j++)
    {
        for(i=0; i<n; i++)
        {
            rowsum[j] += arr[j][i];
            colsum[i] += arr[j][i];
        }
    
    }
    for(i=0; i<((n+1)*5); i++)
        printf(" ");
    printf("| sum\n");
    for(j=0; j<m; j++)
    {
        printf("     ");
        for(i=0; i<n; i++)
            printf("%5d", arr[j][i]);
        printf("|%4d\n", rowsum[j]);
    }
    for(i=0; i<n*9; i++)
        printf("_");
    printf("\nsum  ");
    for(i=0; i<n; i++)
        printf("%5d", colsum[i]);
    printf("\n");
    return 0;
}