#include <stdio.h>

// function used to fill matrix from user input
void fill_matrix(int*, int, int);
void print_matrix(int*, int, int);
// takes pointer to original and result matrix and its order.
void transpose(int*, int*, int , int);
void swap(int*, int*);

int main()
{
    int m, n;
    int arr[20][20], arr_t[20][20];
    printf("Enter the order of matrix\n>");
    scanf("%d%d", &m, &n);
    fill_matrix(arr[0], m, n);
    printf("Original matrix: \n");
    print_matrix(arr[0], m, n);
    transpose(arr[0], arr_t[0], m, n);
    printf("Transposed matrix: \n");
    print_matrix(arr_t[0], n, m);
    return 0;
}


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

void transpose(int* arr, int* res, int m, int n)
{
    int i, j;
    for(j=0; j<m; j++)
    {
        for(i=0; i<n; i++)
            *(res + i*m + j) = *(arr + j*n + i);
    }
}

void swap(int* a, int* b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}