# To be familiar with Array

### **WAP to store 10 integer elements in an array and print it.**


### **Code**
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
        // read from array
        for(i=0; i<n; i++)
            printf("%d\n", *(array+i));
        return 0;
    }


### **Output**
    Enter the numbers of integers to be stored: 5
    Enter the integers: 
    1 2 3 4 5
    The elements are: 
    1
    2
    3
    4
    5


### **WAP to calculate and print the sum and average of elements of array.**

#### **Code**
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

#### **Output**
    Enter the numbers of integers to be stored: 5
    Enter the integers: 
    1 2 3  4 5
    Sum = 15 
    Average = 3.00


### **WAP to sort n elements of array in descending order**

#### **Code**
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

#### **Output**
    Enter the numbers of integers to be stored: 10
    Enter the integers: 
    1 4 2 6 5 3 7 6 3 4
    Unsorted array: 1  4  2  6  5  3  7  6  3  4  
    sorted array: 7  6  6  5  4  4  3  3  2  1


### **WAP to count the frequency of elements in an array.**

#### **Code**
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

#### **Output**
    Enter the numbers of integers to be stored: 10
    Enter the integers: 
    1 2 3 4 3 2 3 4 2 3
    Elements        Frequency
    1               1
    2               3
    3               4
    4               2



### **WAP to pass 1D array to minmax() function. The function should calculate the maximum and**
### **minimum among the elements of the array. Print the maximum and minimum in the main function.**

#### **Code**
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

#### **Output**
    Enter the numbers of integers to be stored: 7
    Enter the integers: 
    12 21 14 15 13 -5 3
    Max = 21
    Min = -5



### **WAP to multiply matrix of different size if possible using 2D array.**

#### **Code**
    #include <stdio.h>

    // takes pointer to first element of matrix and its order
    void print_matrix(int*, int, int);

    // takes pointer to first element of two input matrix and
    // one result matrix and order of result matrix and
    // column/row of first/second input matrix
    void matmul(int*, int*, int*, int, int, int);

    // function used to fill matrix from user input
    void fill_matrix(int*, int, int);

    int main() {
        int m, n, n_, t; // orders of two input matrix m x n, n_ x t
        int A[15][15];
        int B[15][15];
        int res[15][15];
        printf("Enter the order of first matrix\n>");
        scanf("%d%d", &m, &n);

        // fill the matrix A with user input;
        fill_matrix(A[0], m, n);
        printf("first matrix: \n");
        print_matrix(A[0], m, n);

        // get order of 2nd matrix
        printf("Enter the order of second matrix\n>");
        scanf("%d%d", &n_, &t);
        while(n != n_) {
            printf("The matrix of order (%d, %d) can't be multiplied with the matrix of order (%d, %d)\n", m, n, n_, t);
            printf("enter the order of second matrix again\n>");
            scanf("%d%d", &n_, &t);
        }
        // fill matrix B with user input
        fill_matrix(B[0], n_, t);
        printf("second matrix: \n");
        print_matrix(B[0], n_, t);

        // multiply
        matmul(A[0], B[0], res[0], m, t, n);
        printf("matrix product: \n");
        print_matrix(res[0], m, t);

        return 0;
    }


    void fill_matrix(int* mat, int m, int n) {
        int j, i;
        for(j=0; j<m; j++) {
            i = 0;
            printf("Enter %dth row: \n>", j+1);
            while(i<n && scanf("%d", mat + j*n + i)) {
                i++;
            }
        }
    }

    void print_matrix(int* mat, int m, int n) {
        int j, i;
        for(j=0; j<m; j++) {
            for(i=0; i<n; i++) {
                printf("%d ", *(mat + j*n + i));
            }
            printf("\n");
        }
    }


    void matmul(int* A, int* B, int* res, int m, int t, int n) {
        int sum = 0, j, i, k;
        for(j=0; j<m; j++) {
            for(i=0; i<t; i++) {
                sum = 0;
                for(k=0; k<n; k++) {
                    sum += *(A + j*n + k) * *(B + k*t + i);
                }
                *(res + j*t + i) = sum;
            }
        }
    }

#### **Output**
    Enter the order of first matrix
    >2 3
    Enter 1th row: 
    >1 2 3
    Enter 2th row: 
    >4 5 6
    first matrix: 
    1 2 3
    4 5 6
    Enter the order of second matrix
    >3 2
    Enter 1th row: 
    >5 6
    second matrix:
    1 2
    3 4
    5 6
    matrix product:
    22 28
    49 64



### **WAP to find the transpose of matrix.**

#### **Code**
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
        int j, k;
        for(j=0; j<m; j++) {
            i = 0;
            printf("Enter %dth row: \n>", j+1);
            while(i<n && scanf("%d", mat + j*n + i)) {
                i++;
            }
        }
    }

    void print_matrix(int* mat, int m, int n) {
        int j, k;
        for(j=0; j<m; j++) {
            for(i=0; i<n; i++) {
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

#### **Output**
    Enter the order of matrix
    >2 3
    Enter 1th row: 
    >1 2 3
    Enter 2th row: 
    >4 5 6
    Original matrix: 
    1 2 3
    4 5 6
    Transposed matrix:
    1 4
    2 5
    3 6


### **WAP to find the sum of rows and column of matrix**

#### **Code**
    #include <stdio.h>


    void fill_matrix(int mat[][20], int m, int n) {
        int j, i;
        for(j=0; j<m; j++) {
            i = 0;
            printf("Enter %dth row: \n>", j+1);
            while(i<n && scanf("%d", &mat[j][i])) {
                i++;
            }
        }
    }

    void print_matrix(int mat[], int m, int n) {
        for(j=0; j<m; j++) {
            for(i=0; i<n; i++) {
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

#### **Output**
    Enter the order of matrix: 3 4
    Enter 1th row: 
    >1 2 3 4
    Enter 2th row: 
    >5 6 7 8
    Enter 3th row: 
    >9 8 7 6
                             | sum
             1    2    3    4|  10
             5    6    7    8|  26
             9    8    7    6|  30
    ____________________________________
    sum     15   16   17   18